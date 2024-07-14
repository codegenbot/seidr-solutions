#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return pair<int, int>(-1, -1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << findPair({a, b}, a + b).first << " " << findPair({a, b}, a + b).second << endl;
    }
    return 0;
}