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
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x, y, t;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        vector<int> nums(t);
        for (int j = 0; j < t; j++)
            cin >> nums[j];

        vector<int> result = findPair(nums, t);

        cout << result[0] << " " << result[1] << endl;

    }

    return 0;
}