#include <vector>
#include <string>
#include <cassert>

int do_algebra(std::vector<std::string> operations, std::vector<int> numbers) {
    int result = numbers[0];
    for (size_t i = 0; i < operations.size(); ++i) {
        if (operations[i] == "+") {
            result += numbers[i + 1];
        } else if (operations[i] == "-") {
            result -= numbers[i + 1];
        } else if (operations[i] == "*") {
            result *= numbers[i + 1];
        } else if (operations[i] == "/") {
            if (numbers[i + 1] != 0) {
                result /= numbers[i + 1];
            } else {
                return -1;
            }
        }
    }
    return result;
}