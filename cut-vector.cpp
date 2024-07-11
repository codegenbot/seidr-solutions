```cpp
#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = nums[i+1] - nums[i];
        if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
        else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    }
    if(min_idx == -1) {
        vector<int> res(1);
        for(int i=0; i<n; i++)
            res[0].push_back(nums[i]);
    } else {
        vector<int> res(2);
        for(int i=0; i<=min_idx; i++)
            res[0].push_back(nums[i]);
        for(int i=min_idx+1; i<n; i++)
            res[1].push_back(nums[i]);
    }
    return make_pair(res[0], res[1]);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    for(auto vec : result) {
        for(auto num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}