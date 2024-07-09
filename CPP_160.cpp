#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = std::stoll(nums[0].c_str());
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * std::stoll(nums[i+1].c_str());
        } else if (ops[i] == "-") {
            result -= temp * std::stoll(nums[i+1].c_str());
        } else if (ops[i] == "*") {
            temp *= std::stoll(nums[i+1].c_str());
        } else if (ops[i] == "/") {
            temp /= std::stoll(nums[i+1].c_str());
        }
    }

    return result;
}

int main() {
    assert (do_algebra({"//", "*"}, {7, 3, 4}) == 8);
}