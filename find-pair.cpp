#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};  // Return empty pair if no such pair is found
}

int main() {
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a >> b;
        pair<int,int> res = findPair({a,b}, a+b);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}