#include <vector>
#include <cmath>

int do_algebra(const char* operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (std::string(operation) == "*/") {
            if (*operation == '*') {
                result *= operands[i];
            } else {
                if (operands[i] != 0) {
                    result /= operands[i];
                } else {
                    return 0;
                }
            }
        } else if (std::string(operation) == "+*") {
            if (*operation == '+') {
                result += operands[i];
            } else {
                result *= operands[i];
            }
        } else if (std::string(operation) == "-+") {
            if (*operation == '-') {
                result -= operands[i];
            } else {
                result += operands[i];
            }
        }
    }
    return result;
}

int main() {
    int result = do_algebra("//*", {7, 3, 4});
    return 0;
}