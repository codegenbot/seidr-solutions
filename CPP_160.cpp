```
#include <vector>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operands.size() - 1; i++) {
        if (*operators[i] == "+") {
            result += operands[i + 1];
        } else if (*operators[i] == "-") {
            result -= operands[i + 1];
        } else if (*operators[i] == "*") {
            result *= operands[i + 1];
        } else if (*operators[i] == "/") {
            if (operands[i + 1] != 0)
                result = result / operands[i + 1];
            else
                return 0;
        }
    }
    return result;
}

int main() {
    int result = do_algebra({"//", "*"}, {7, 3, 4});
    return 0;
}