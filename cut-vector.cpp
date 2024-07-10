#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + cutIndex}, {nums.begin() + cutIndex, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = cutVector(nums);
    
    cout << "[";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << "] [" << result[1][0];
    for (int i = 1; i < result[1].size(); i++) {
        cout << " " << result[1][i];
    }
    cout << "]" << endl;
    
    return 0;
}