#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (auto &num : numbers) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(numbers, target);

    if (!result.first && !result.second) {
        cout << "No two elements sum to the target." << endl;
    } else {
        cout << result.first << endl;
        cout << result.second << endl;
    }
    
    return 0;
}