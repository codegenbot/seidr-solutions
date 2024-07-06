#include <vector>
#include <cmath>
#include <iostream>

int do_algebra(std::string operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        switch(operation[0]) {
            case '/':
                if (operation.length() == 1)
                    result /= operands[i];
                else
                    result /= operands[i];
                break;
            case '*':
                result *= operands[i];
                break;
            default:
                std::cerr << "Invalid operation." << std::endl;
                return -1;
        }
    }
    return result;
}

int main() {
    int result = do_algebra("/", {7, 3, 4});
    std::cout << "Result: " << result << std::endl;
    return 0;
}