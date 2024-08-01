#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> pair;
    map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            pair.push_back(complement);
            pair.push_back(nums[i]);
            break;
        }
        numMap[nums[i]] = i;
    }

    return pair;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;

    vector<int> result = findPair(nums, target);

    cout << result[0] << endl;
    cout << result[1] << endl;

    return 0;
}