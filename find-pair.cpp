#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x1, x2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        vector<int> res = findPair({x1, x2}, x1 + x2);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}