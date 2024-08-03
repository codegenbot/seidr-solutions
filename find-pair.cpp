#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return {complement, num};
        }
        numMap[num] = 1;
    }

    return {}; // or throw an exception
}

int main() {
    int n, num;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> num;
    }
    
    int target;
    cin >> target;
    
    vector<int> nums;
    while (cin >> num && num != 0) {
        nums.push_back(num);
    }
    
    pair<int, int> result = findPair(nums, target);
    
    if (!result.first) {
        cout << "No solution found" << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}