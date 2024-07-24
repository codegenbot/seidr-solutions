#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }

    // If we have not found a pair by now, return an empty pair
    return {{},{}};
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

    cout << result.first << " " << result.second << endl;

    return 0;
}