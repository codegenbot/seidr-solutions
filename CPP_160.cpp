#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int do_algebra(std::vector<std::string> ops, std::vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp /= std::stoll(nums[i].c_str());
        } else if (ops[i] == "^") {
            temp = pow(temp, std::stoll(nums[i].c_str()));
        }
    }

    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}