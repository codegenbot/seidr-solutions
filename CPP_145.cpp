#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.push_back({getDigitSum(nums[i]), i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (pair<int, int> p : pairs) {
        result.push_back(nums[p.second]);
    }
    return result;

}

int getDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}