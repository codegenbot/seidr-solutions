#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for(int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        if(abs(leftSum - rightSum) <= (n-i)*nums[i-1]) {
            res.first = vector<int>(nums.begin(), nums.begin() + i);
            res.second = vector<int>(nums.begin() + i, nums.end());
            return res;
        }
    }
    
    // If no cut found
    res.first = vector<int>(nums.begin(), nums.end());
    res.second = {};
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(nums);
    
    cout << "[";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << "] [" << endl;
    
    cout << "[";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}