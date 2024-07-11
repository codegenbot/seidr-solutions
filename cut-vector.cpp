#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i=0; i<nums.size()-1; i++){
        int diff = abs(nums[i] - nums[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left, right;
    left.assign(cutIndex+1, nums.begin());
    right.assign(nums.size()-cutIndex-1, nums.begin()+cutIndex+1);
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "1 ";
    for(auto x: result.first) {
        cout << x << " ";
    }cout<<endl;
    cout << "0 ";
    for(auto x: result.second) {
        cout << x << " ";
    }cout<<endl;
    return 0;
}