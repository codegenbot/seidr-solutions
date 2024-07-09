```cpp
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
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

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin >> nums[i];
    vector<int> output = order_by_points(nums);
    
    // Output the sorted numbers
    cout << "Sorted numbers by points: ";
    for(auto x : output)
        cout << x << " ";
    cout << endl;
    
    // Check if the output is correct
    vector<int> correct_order;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> nums[i];
    correct_order = order_by_points(nums);
    
    if(issame(output, correct_order))
        cout << "Output is correct" << endl;
    else 
        cout << "Incorrect output. Please check your code." << endl;
    
    return 0;
}