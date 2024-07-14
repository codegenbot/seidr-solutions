Here is the solution:

#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<int> result = {-1, -1};
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(map.find(complement) != map.end()) {
            return {complement, nums[i]};
        }
        map[nums[i]] = i;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> res = findPair(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}