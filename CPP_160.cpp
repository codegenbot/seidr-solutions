#include <vector>
#include <cmath>

int do_alphabet(std::vector<char*> operators, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (*operators[i] == '+') {
            result += operands[i + 1];
        } else if (*operators[i] == '-') {
            result -= operands[i + 1];
        } else if (*operators[i] == '*') {
            result *= operands[i + 1];
        } else if (*operators[i] == '/') {
            result /= static_cast<int>(operands[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_alphabet({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}