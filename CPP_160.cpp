#include <vector>
#include <cmath>

int do_algebra(std::vector<int> operations, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operations[i-1] == 1) { // * operation
            result *= operands[i];
        } else if (operations[i-1] == 2) { // / operation
            if(operands[i] == 0){
                return -1; // handling division by zero
            }
            result /= operands[i];
        } else if (operations[i-1] == 3) { // + operation
            result += operands[i];
        } else if (operations[i-1] == 4) { // - operation
            result -= operands[i];
        }
    }
    return result;
}

int main() {
    std::vector<int> operations = {1, 2};
    std::vector<int> operands = {7, 3, 4};
    int result = do_algebra(operations, operands);
    assert(result == 8);
    return 0;
}