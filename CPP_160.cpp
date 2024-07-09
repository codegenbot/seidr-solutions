#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    double temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "//") {
            temp = temp / nums[i];
        } else if (ops[i] == "**") {
            temp = pow(temp, nums[i]);
        }
    }

    return result;
}