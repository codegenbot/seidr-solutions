#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    
    return {-1, -1}; // or throw an exception
}

int main() {
    int n, a, b;  
    cin >> n;  
    for(int i=0; i<n; ++i) {  
       cin >> a >> b;  
       vector<int> nums = {a, b};
       cout << findPair(nums, 0).first << " " << findPair(nums, 0).second << endl;
    }
    return 0;
}