#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; ++j) {
            sum1 += nums[j];
        }
        
        for (int j = i + 1; j < n; ++j) {
            sum2 += nums[j];
        }
        
        int diff = abs(sum1 - sum2);
        
        if (diff == 0 || diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + pos + 1);
    vector<int> right(nums.begin() + pos, nums.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "Left: ";
    for (const auto &num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (const auto &num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}