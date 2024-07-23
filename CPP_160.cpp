#include <vector>
#include <string>
#include <cassert>

int do_algebra(std::vector<std::string> operations, std::vector<int> numbers) {
    int result = numbers[0];
    
    for (int i = 1; i < numbers.size(); ++i) {
        if (operations[i-1] == "+") {
            if (operations[i-2] == "//") {
                result /= numbers[i - 1];
            } else {
                result += numbers[i];
            }
        } else if (operations[i-1] == "*") {
            result *= numbers[i];
        }
    }
    
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}