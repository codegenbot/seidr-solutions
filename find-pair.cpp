#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        
        numMap[nums[i]] = i;
    }
    
    throw runtime_error("No pair found");
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

    try {
        vector<int> result = findPair(nums, target);

        cout << result[0] << endl;
        cout << result[1] << endl;
    } catch (exception& e) {
        cout << "No pair found" << endl;
    }

    return 0;
}