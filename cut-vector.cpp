#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    int i = 0;
    for (int j = 1; j <= n; j++) {
        if (j == n || nums[j] != nums[i]) {
            res[0].push_back(nums[i]);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.begin() + j);
            i = j;
            break;
        }
    }

    return res;
}

int main() { vector<vector<int>> result = cutVector({1, 2, 3, 4, 5, 6}); cout << "Result: "; for (auto &v : result) { for (int x : v) { cout << x << " "; } } cout << endl; return 0; }