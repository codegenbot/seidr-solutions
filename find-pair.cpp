#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            result = {complement, num};
            break;
        }
        numMap[num] = 1;
    }

    return result;
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

    vector<int> pair = findPair(nums, target);

    cout << pair[0] << endl;
    cout << pair[1] << endl;

    return 0;
}