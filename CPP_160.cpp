```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = nums[0];
    int temp = 1;

    for (int i = 1; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp /= nums[i];
        } else if (ops[i] == "+") { 
            result += temp * nums[i];
        }
    }

    return result;
}