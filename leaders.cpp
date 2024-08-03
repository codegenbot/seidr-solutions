#include <vector>
using namespace std;

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(nums);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    int max_right = nums[n-1];
    for(int i=n-1; i>=0; i--){
        if(nums[i] >= max_right){
            res.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    return res;
}