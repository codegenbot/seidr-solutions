#include <vector>
using namespace std;

int solve(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int new_num = (num / 3) - 2;
        sum += new_num;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << solve(nums) << endl;
    return 0;
}