#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    throw invalid_argument("No such pair found");
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        try {
            cout << findPair({a, b}, a + b) << endl;
        } catch (invalid_argument& e) {
            cout << "No such pair found" << endl;
        }
    }
    return 0;
}