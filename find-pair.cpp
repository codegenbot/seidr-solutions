#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    vector<int> result = {-1, -1};
    
    for(int i=0; i<nums.size(); i++) {
        int complement = target-nums[i];
        if(numIndex.find(complement)!=numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return result;
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
    cout << "(" << findPair(nums, target)[0] << ", " << findPair(nums, target)[1] << ")" << endl;
}