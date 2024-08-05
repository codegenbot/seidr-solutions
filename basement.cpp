```cpp
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
    vector<int> nums = {-2, 3, -4};
    int result = findFirstNegativeIndex(nums);
    if (result != -1) {
        cout << "First negative index: " << result << endl;
    } else {
        cout << "No negative sum found." << endl;
    }
    return 0;
}