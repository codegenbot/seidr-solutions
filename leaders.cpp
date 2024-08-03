```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(nums[j] >= nums[i]){
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(nums[i]);
    }
    
    return res;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> leadersResult = leaders(nums);
    for(int leader: leadersResult)
        cout << leader << " ";
    return 0;
}