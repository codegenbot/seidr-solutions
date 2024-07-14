Here is the solution:

#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); ++i) {
        total += nums[i];
        if (total < 0) return i;
    }
    return -1; // not found
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) cin >> num;
    cout << findFirstNegativeIndex(nums) << endl;
    return 0;
}