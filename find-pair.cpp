#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> pair;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            pair = {complement, num};
            break;
        }
        numMap[num] = 1;
    }

    return pair;
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

    vector<int> result = findPair(nums, target);

    cout << result[0] << endl << result[1] << endl;

    return 0;
}