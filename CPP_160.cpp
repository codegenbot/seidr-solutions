#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "/") {
            result = result / static_cast<int>(operands[i + 1]);
        }
    }
    return result;
}

int main() {
    int result = do_algebra({"//", "*"}, {7, 3, 4});
    return 0;
}