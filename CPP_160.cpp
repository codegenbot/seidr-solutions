#include <vector>
#include <cmath>

int do_algebra(const char* operation, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (!strcmp(operation, "*/")) {
            if (*operation == '*') {
                result *= operands[i];
            } else {
                result /= operands[i];
            }
        } else if (!strcmp(operation, "+*") || !strcmp(operation, "-+")) {
            if (*operation == '+') {
                result += operands[i];
            } else {
                result = (result == 0) ? operands[i] : (result * -1 + operands[i]);
            }
        }
    }
    return result;
}

int main() {
    int result = do_algebra("//*", {7, 3, 4});
    return 0;
}