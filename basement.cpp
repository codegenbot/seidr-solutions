#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {-2, 3, -4, 5, -6};
    int result = findFirstNegativeIndex(nums);
    if (result == -1) {
        cout << "No negative index found." << endl;
    } else {
        cout << "First negative index: " << result << endl;
    }
    return 0;
}