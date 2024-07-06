#include <cassert>
#include <vector>
#include <cmath>

int do_algebra(std::vector<char> operations, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operations[i-1] == '/') {
            while (operands[i] != 0 && result % operands[i] != 0) {
                if (result >= operands[i]) {
                    result /= operands[i];
                } else {
                    int temp = result;
                    result = operands[i];
                    operands[i] = temp;
                    operations[i-1] = '/';
                }
            }
        } else if (operations[i-1] == '*') {
            while (operands[i] != 0 && result % operands[i] != 0) {
                result *= operands[i];
            }
        } else if (operations[i-1] == '+') {
            result += operands[i];
        } else if (operations[i-1] == '-') {
            result -= operands[i];
        }
    }
    return result;
}

int main() {
    int result = do_algebra({'*', '/'}, {7, 3, 4});
    assert(result == 8);
    return 0;
}