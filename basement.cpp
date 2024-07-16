```cpp
#include <vector>
using namespace std;

int basement(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {10, -20, 30, -5, 40};
    int result = basement(nums);
    cout << "First index with a negative sum: " << result << endl;
    return 0;
}