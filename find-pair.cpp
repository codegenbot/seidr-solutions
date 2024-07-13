Here is the solution:

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
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vector<int> nums = {a, b};
        cout << findPair(nums, 0)[0] << " " << findPair(nums, 0)[1] << endl;
    }

    return 0;
}