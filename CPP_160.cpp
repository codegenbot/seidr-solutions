#include <vector>
#include <cmath>

int do_algebra(std::vector<int> operators, std::vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == 1) {
            result += operands[i];
        } else if (operators[i] == 2) {
            result -= operands[i];
        } else if (operators[i] == 3) {
            result *= operands[i];
        } else if (operators[i] == 4) {
            if(operands[i] != 0)
                result = result / static_cast<int>(operands[i]);
            else
                return -1; // Division by zero is not allowed
        }
    }
    return result;
}

int main() {
    std::vector<int> operators({1,2});
    std::vector<int> operands({7,3,4});

    int result = do_algebra(operators, operands);
    return 0;
}