#include <vector>
#include <cmath>

int do_algebra(std::string operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        switch(operation[0]){
            case '*':
                result *= operands[i];
                break;
            case '/':
                if(operands[i] != 0)
                    result /= operands[i];
                else
                    return -1; // or handle this however you want
                break;
        }
    }
    return result;
}

int main() {
    int result = do_algebra("/", {7, 3, 4});
    std::cout << "Result: " << result << std::endl;
    return 0;
}