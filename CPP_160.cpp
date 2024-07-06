```cpp
#include <vector>
#include <cmath>

int do_algebra(std::string operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operation == "//") {
            while (i < operands.size() - 1 && result % operands[i] != 0) {
                result /= operands[i++];
            }
        } else if (operation == "*") {
            int multiply = 1;
            for (int j = 0; j < operands.size(); ++j) {
                multiply *= operands[j];
            }
            return multiply;
        } else if (operation == "+") {
            int sum = 0;
            for (int i = 0; i < operands.size(); ++i) {
                sum += operands[i];
            }
            return sum;
        } else if (operation == "-") {
            int subtract = operands[0];
            for (int i = 1; i < operands.size(); ++i) {
                subtract -= operands[i];
            }
            return subtract;
        }
    }
    return result;
}

int main() {
    int result = do_algebra("//", {7, 3, 4});
    return 0;
}