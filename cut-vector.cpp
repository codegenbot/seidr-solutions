#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    for(int i=1; i<n; i++){
        if(nums[i] == nums[0]){
            res.push_back({nums[0]});
            res.push_back({nums[i]});
            return res;
        }
    }
    res.push_back({nums[0]});
    res.push_back({nums[n-1], 0});
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> result = cutVector(nums);
    for(auto &v : result){
        for(int num : v) cout << num << ' ';
        cout << '\n';
    }
    return 0;
}