#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {}; // or throw an exception if no pair is found
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    auto pair = findPair(nums, target);

    if (!pair.empty()) {
        cout << pair.first << "\n" << pair.second << "\n";
    } else {
        cout << "No such pair found." << endl;
    }

    return 0;
}