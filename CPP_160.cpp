```
#include <vector>
#include <cmath>
#include <iostream>

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