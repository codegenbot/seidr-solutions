#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(complement, nums[i]);
        }
        numMap[nums[i]] = i;
    }
    throw invalid_argument("No such pair found");
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;

    try {
        auto result = findPair(numbers, target);
        cout << result.first << "\n" << result.second << "\n";
    } catch (invalid_argument& e) {
        cout << "No such pair found\n";
    }

    return 0;
}