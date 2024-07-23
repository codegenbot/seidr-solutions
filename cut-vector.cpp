#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    int i;
    for (i = 0; i < n - 1; i++) {
        if (nums[i] != nums[i + 1]) break;
    }
    res[0].reserve(i + 1);
    copy(nums.begin(), nums.begin() + i, back_inserter(res[0]));

    int j = n - 1;
    for (; j > 0 && nums[j] == nums.back(); j--) {}
    res[1].reserve(n - j);
    copy(nums.begin() + i, nums.end(), back_inserter(res[1]));

    return res;
}

int main() {
    vector<int> input = {1, 2, 2, 3, 4, 5};
    vector<vector<int>> output = cutVector(input);

    return 0;
}