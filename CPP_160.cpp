```cpp
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> op, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < op.size(); i++) {
        if (op[i] == "+") {
            result += operands[i + 1];
        } else if (op[i] == "-") {
            result -= operands[i + 1];
        } else if (op[i] == "*") {
            result *= operands[i + 1];
        } else if (op[i] == "/") {
            result /= operands[i + 1];
        } else if (op[i] == "**" || op[i] == "^") {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}