#include <vector>
#include <cmath>
#include <initializer_list>
using namespace std;

int do_algebra(initializer_list<string> ops, initializer_list<int> nums) {
    int result = 0;
    int temp = 1;

    for (auto i = ops.begin(); i != ops.end(); ++i) {
        if (*i == "+") {
            result += temp * *nums++;
        } else if (*i == "-") {
            result -= temp * *nums++;
        } else if (*i == "*") {
            temp *= *nums++;
        } else if (*i == "//" || *i == "**") {
            temp = pow(temp, *nums++);
        }
    }

    return result;
}