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
    int n, t;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    cin >> t;

    auto result = findPair(nums, t);

    cout << result[0] << endl;
    cout << result[1] << endl;

    return 0;
}