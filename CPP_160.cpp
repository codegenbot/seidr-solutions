```cpp
#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operation, std::vector<int> numbers) {
    if (operation.size() != 1 || numbers.size() <= 0) {
        return -1; // error message: invalid input
    }
    
    int result = numbers[0];
    for (int i = 1; i < numbers.size(); ++i) {
        if (operation[0] == "+") {
            result += numbers[i];
        } else {
            // handle other operations as needed
            return -1; // error message: unsupported operation
        }
    }
    
    return result;
}

int main() {
    assert(do_algebra({"+"}, {1}) == 2); // example usage
}