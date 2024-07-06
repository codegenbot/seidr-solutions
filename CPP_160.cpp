#include <cmath>

int do_alpha(std::vector<char*> operators, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (*operators[i] == '+') {
            result += operands[i + 1];
        } else if (*operators[i] == '-') {
            result -= operands[i + 1];
        } else if (*operators[i] == '*') {
            result *= operands[i + 1];
        } else if (*operators[i] == '/') {
            if (operands[i + 1] != 0)
                result = result / operands[i + 1];
            else
                return 0;
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}