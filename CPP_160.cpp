```cpp
#include <vector>
#include <cmath>
#include <initializer_list>

int do_algebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = operands[0];
    for (std::size_t i = 0; i < operators.size(); ++i) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "//") {
            result = result / operands[i + 1];
        } else if (operators[i] == "**") {
            result = std::pow(result, operands[i + 1]);
        }
    }
    return result;
}

int main() {
    int result = do_algebra({"//", "*"}, {7, 3, 4});
    return 0;
}