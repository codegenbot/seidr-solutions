#include <vector>
#include <cmath>
#include <cctype>

int do_algebra(std::vector<std::string> operations, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operations[i-1] == "/") {
            if(operands[i] == 0){
                return -1;
            }
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
    std::vector<std::string> operations = {"*", "/"};
    std::vector<int> operands = {7, 3, 4};
    int result = do_algebra(operations, operands);
    assert(result == 8);
    return 0;
}