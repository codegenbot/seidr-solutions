#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = nums[0];
    long long temp = nums[0];

    for (int i = 1; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp;
        } else if (ops[i] == "-") {
            result -= temp;
        } else if (ops[i] == "*") {
            temp *= std::stoll(nums[i].c_str());
        } else if (ops[i] == "/") {
            temp /= std::stoll(nums[i].c_str());
        } else if (ops[i] == "^") {
            temp = pow(temp, std::stoll(nums[i].c_str()));
        }
    }

    return result;
}

int main() {
    assert (do_algebra({"//", "*"}, {7, 3, 4}) == 8);
}