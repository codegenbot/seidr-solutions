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

    return result;
}

int main() {
    int n, x1, x2, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (i == 0) {
            cin >> x1 >> x2;
        } else {
            cin >> x1 >> x2;
        }
        vector<int> result = findPair({x1, x2}, t);
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}