#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            return result;
        }
        numMap[nums[i]] = i;
    }

    // If no pair is found
    return {};
}

int main() {
    int n, x1, x2, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        cin >> x1 >> x2;
        vector<int> res = findPair({x1, x2}, t);
        cout << res[0] << endl;
        cout << res[1] << endl;
    }
    return 0;
}