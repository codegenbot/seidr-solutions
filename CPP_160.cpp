```cpp
#include <vector>
#include <string>
#include <initializer_list>

int do_algebra(std::vector<std::string> operations, std::vector<int> numbers) {
    if(operations.size() != numbers.size()) {
        throw std::invalid_argument("Operations and numbers should have the same size");
    }
    
    int result = numbers[0];
    for(int i = 0; i < operations.size(); i++) {
        if(operations[i] == "+") {
            result += numbers[i+1];
        } else if(operations[i] == "-") {
            result -= numbers[i+1];
        }
    }
    
    return result;
}

int main() {
    assert(do_algebra({"+"}, {1}) == 2);
    return 0;
}