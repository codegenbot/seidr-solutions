#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> map;
    
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
    
    vector<int> result = findPair(nums, target);
    
    cout << result[0] << endl;
    cout << result[1] << endl;
    
    return 0;
}