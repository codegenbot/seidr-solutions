#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n, x1, x2, y1, y2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        cout << "Pair found: " << findPair({x1, x2}, x2).first << " and " << findPair({x1, x2}, x2).second << endl;
    }
    return 0;
}