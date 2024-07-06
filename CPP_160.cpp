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

int main(int argc, char** argv) {
    std::vector<std::string> operations = {"*", "+"};
    std::vector<int> operands = {4, 3};
    int result = do_algebra(operations, operands);
    return 0;