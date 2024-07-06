#include <vector>
#include <cmath>
#include <cctype>

int do_algebra(std::string operation, std::vector<int> operands) {
    int result = 0;
    for (char c : operation) {
        if (c == '/') {
            result /= operands[1];
        } else if (c == '*') {
            result *= operands[1];
        } else if (c == '+') {
            result += operands[1];
        } else if (c == '-') {
            result -= operands[1];
        }
    }
    return result;
}

int main() {
    std::string operation = "//*";
    std::vector<int> operands = {7, 3, 4};
    int result = do_algebra(operation, operands);
    return 0;
}