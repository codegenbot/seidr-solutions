#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> hash_map;
    vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (hash_map.find(complement) != hash_map.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        hash_map[nums[i]] = i;
    }

    return result;
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

    vector<int> result = findPair(nums, target);

    for (int num : result) {
        cout << num << endl;
    }

    return 0;
}