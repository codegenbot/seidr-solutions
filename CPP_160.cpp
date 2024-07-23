#include <vector>
#include <string>
#include <initializer_list>

int do_algebra(std::vector<std::string> operations, std::vector<int> numbers) {
    int result = numbers[0];
    for (int i = 0; i < operations.size(); ++i) {
        if (operations[i] == "+") {
            result += numbers[i + 1];
        }
        else if (operations[i] == "-") {
            result -= numbers[i + 1];
        }
        // add more conditions for other operations
    }
    return result;
}

int main() {
    assert(do_algebra({"+"}, {1}) == 2);
    return 0;
}