#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -2, 3, -4, 5};
    int result = findFirstNegativeIndex(nums);
    cout << "The first negative index is: " << result << endl;
    return 0;
}