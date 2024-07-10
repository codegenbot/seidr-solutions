#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (i == 0 || nums[i] > nums[i - 1]) continue;
        int leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = accumulate(nums.begin() + i, nums.end(), 0);
        return {{nums.begin(), nums.begin() + i}, {nums.begin() + i, nums.end()}};
    }
    return {{nums.begin(), nums.end()}, {}};
}

int main() {
    vector<int> nums;
    int num;
    cout << "Enter numbers. Enter -1 to stop.\n";
    while (true) {
        cin >> num;
        if (num == -1) break;
        nums.push_back(num);
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    for (const auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}