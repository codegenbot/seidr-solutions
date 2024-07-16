#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &x : nums)
        cin >> x;

    int target;
    cin >> target;

    vector<int> pair = findPair(nums, target);

    cout << pair[0] << "\n" << pair[1] << "\n";

    return 0;
}