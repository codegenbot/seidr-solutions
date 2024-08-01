```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,-2,3,-4};
    int basementIndex = basementIndex(nums);
    cout << "Basement Index: " << basementIndex << endl;
    return 0;
}

int basementIndex(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}