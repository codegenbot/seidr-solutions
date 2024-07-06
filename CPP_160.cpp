#include <vector>
#include <cmath>

int do_algebra(const char* operations[], std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (std::string(operations[i-1]) == "/") {
            result /= operands[i];
        } else if (std::string(operations[i-1]) == "*") {
            result *= operands[i];
        } else if (std::string(operations[i-1]) == "+") {
            result += operands[i];
        } else if (std::string(operations[i-1]) == "-") {
            result -= operands[i];
        }
    }
    return result;
}

#include <cassert>

int main() {
    int result = do_algebra(new char[] {"+"}, {7, 3});
    assert(result == 10);
    return 0;
}