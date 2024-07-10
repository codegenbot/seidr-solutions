#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    if(n == 1){
        return nums;
    }
    
    for(int i=n-2; i>=0; i--){
        while(i<n-1 && nums[i] <= nums[n-1]){
            i--;
        }
        result.push_back(nums[i]);
    }
    
    result.push_back(nums.back());
    
    return result;
}

int main() {
    // Your code to test the function
}