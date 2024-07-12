#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            auto it = numIndex.find(complement);
            return min({complement, nums[i]}) == complement ? make_pair(complement, nums[i]) : make_pair(nums[i], complement);
        }
        numIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}