#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    throw invalid_argument("No pair found");
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
    try {
        auto p = findPair(nums, target);
        cout << p.first << endl;
        cout << p.second << endl;
    } catch (invalid_argument& e) {
        cout << "No pair found" << endl;
    }
    return 0;
}