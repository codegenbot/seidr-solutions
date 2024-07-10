#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(num);
            result.push_back(complement);
            break;
        }
        numMap[num] = 1;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        vector<int> nums(t);
        for (auto& num : nums) {
            cin >> num;
        }

        int target;
        cin >> target;

        vector<int> result = findPair(nums, target);

        for (const auto& num : result) {
            cout << num << endl;
        }
    }

    return 0;
}