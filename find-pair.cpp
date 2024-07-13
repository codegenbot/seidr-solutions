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
    return {}; // Return an empty pair if no such pair found
}

int main() {
    int n, a, b, t;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    cin >> t;
    auto p = findPair(v, t);
    if (!p.empty()) {
        cout << p.first << endl << p.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    return 0;
}