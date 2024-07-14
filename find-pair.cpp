#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return make_pair(complement, nums[i]);
        }
        numIndex[nums[i]] = i;
    }
    return make_pair(-1, -1);
}

int main() {
    int n, num;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers[i] = num;
    }
    int target;
    cin >> target;

    pair<int, int> result = findPair(numbers, target);

    cout << result.first << '\n';
    cout << result.second << '\n';

    return 0;
}