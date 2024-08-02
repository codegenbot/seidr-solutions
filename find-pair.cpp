#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    throw runtime_error("No pair found");
}

int main() {
    int n, x1, x2, y1, y2;
    cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1;
        v1.push_back(x1);
        v2.push_back(y1);
    }
    
    int target;
    cin >> target;

    pair<int, int> result = findPair(v1, target);

    cout << result.first << '\n' << result.second << endl;

    return 0;
}