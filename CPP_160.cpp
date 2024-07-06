#include <vector>
#include <cmath>

int do_algebra(std::string operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operation == "//") {
            result /= operands[i];
        } else if (operation == "*") {
            result *= operands[i];
        } else if (operation == "+") {
            result += operands[i];
        } else if (operation == "-") {
            result -= operands[i];
        }
    }
    return result;
}

int main() {
    int result = do_algebra("//", {7, 3, 4});
    //assert(result == 1);
    return 0;
}