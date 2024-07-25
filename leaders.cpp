#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    if(n == 1) return {nums[0]}; // If there's only one element, it's a leader.
    
    for(int i=n-2; i>=0; --i){ 
        while(i > 0 && nums[i] <= nums[i+1]) i--; // Keep moving to the left until we find a number that is greater than its right neighbour.
        
        if(i == n-1) res.push_back(nums[i]); // If we're at the last element, it's always a leader.
        else res.push_back(nums[i]);
    }
    
    return res;
}

int main() {
    vector<int> nums = {0};
    vector<int> result = leaders(nums);
    for(auto i : result) cout << i << " ";
    return 0;
}