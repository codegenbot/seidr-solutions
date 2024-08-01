#include <vector>
using namespace std;

pair<int,int> findPair(const vector<int>& numbers, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, numbers[i]};
        }
        numIndex[numbers[i]] = i;
    }
    return {{}, {}};
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
    pair<int,int> result = findPair(nums, target);
    cout << result.first << "\n" << result.second << endl;
    return 0;
}