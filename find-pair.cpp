#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> map;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.count(complement)) {
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
    for (auto &num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    auto pair = findPair(nums, target);
    
    if (!pair.empty()) {
        cout << pair[0] << endl;
        cout << pair[1] << endl;
    } else {
        cout << "No solution exists." << endl;
    }
    
    return 0;
}