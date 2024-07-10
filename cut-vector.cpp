#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> res[2];
    for (int i = 0; i < n; i++) {
        res[i % 2].push_back(nums[i]);
    }
    if (n == 1 || res[0][res[0].size() - 1] == res[1][0]) {
        return {res[0], res[1]};
    } else {
        int minDiff = INT_MAX;
        int cutPos = -1;
        for (int i = 1; i < n; i++) {
            if (abs(res[0].back() - res[1][0]) < minDiff) {
                minDiff = abs(res[0].back() - res[1][0]);
                cutPos = i;
            }
            res[0].pop_back();
            res[1].insert(res[1].begin(), res[1][0]);
        }
        return {res[0], res[1]};
    }
}

int main() {
    vector<int> nums = {1, 10};
    vector<int> result = cutVector(nums);
    for (auto num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}