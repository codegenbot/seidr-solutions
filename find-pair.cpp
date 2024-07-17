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
    
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    
    if(result.first != 0) {
        cout << result.first << "\n" << result.second << "\n";
    } else {
        cout << "No two elements sum to the target." << "\n";
    }
    
    return 0;
}