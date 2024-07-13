#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int num : nums) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return make_pair(num, complement);
        }
        map[num] = 1;
    }
    return make_pair(-1, -1); // or throw an exception
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
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}