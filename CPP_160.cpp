```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "//") {
            temp = temp / static_cast<int>(nums[i]);
        } else if (ops[i] == "**") {
            temp = pow(temp, static_cast<double>(nums[i]));
        }
    }

    return result;
}

int main() {
    assert (do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}