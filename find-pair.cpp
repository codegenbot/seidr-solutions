#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numToIndex.count(complement)) {
            return make_pair(nums[i], complement);
        }
        
        numToIndex[nums[i]] = i;
    }
    
    return make_pair(0, 0); // default pair
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    auto result = findPair(nums, target);

    cout << result.first << '\n' << result.second << '\n';

    return 0;
}