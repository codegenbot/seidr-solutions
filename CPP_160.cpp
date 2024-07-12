#include <vector>
#include <cmath>

std::vector<std::string> do_algebra(std::vector<std::string>, std::vector<int>) {
    // implement your algorithm here
}

int main() {
    int result = 0;
    std::vector<std::string> operators = {"//", "*"};
    std::vector<int> operands = {7, 3, 4};
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "//") {
            result /= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        }
    }
    return 0;
}