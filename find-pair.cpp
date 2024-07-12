#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {nums[i], complement};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        vector<int> res = findPair({x1, x2}, x1 + x2);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}