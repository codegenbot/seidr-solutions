#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        numToIndex[nums[i]] = i;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int& num : nums) {
        cin >> num;
    }

    int target;
    cin >> target;

    vector<int> result = findPair(nums, target);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}