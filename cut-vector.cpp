#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += nums[j];
        
        for (int j = i; j < nums.size(); ++j)
            rightSum += nums[j];
        
        if (leftSum == rightSum) {
            return {{}, {nums.begin(), nums.end()}};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftPart(nums.begin(), next(nums.begin(), cutIndex));
    vector<int> rightPart({nums.begin() + cutIndex, nums.end()});
    
    return {leftPart, rightPart};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    
    cout << "[";
    for (int i = 0; i < result.first.size(); ++i) {
        if (i > 0)
            cout << ", ";
        cout << result.first[i];
    }
    cout << "] [";
    for (int i = 0; i < result.second.size(); ++i) {
        if (i > 0)
            cout << ", ";
        cout << result.second[i];
    }
    cout << "]\n";
    
    return 0;
}