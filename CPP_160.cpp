#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operations, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operations[i-1] == "/") {
            result /= operands[i];
        } else if (operations[i-1] == "*") {
            result *= operands[i];
        } else if (operations[i-1] == "+") {
            result += operands[i];
        } else if (operations[i-1] == "-") {
            result -= operands[i];
        }
    }
    return result;
}

int main() {
    int result = do_algebra({std::string{"*"}, std::string{"/"}}, {7, 3, 4});
    assert(result == 8);
    return 0;
}