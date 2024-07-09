#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main()
{
    vector<int> result = order_by_points({123, 45, 67, 89});
    vector<int> correct = {89, 67, 45, 123};
    if (issame(result, correct))
        cout << "The output is as expected." << endl;
    else
        cout << "The output does not match the expected result." << endl;

    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = nums[i];
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back({sum, i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}