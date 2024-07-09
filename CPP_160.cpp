```cpp
#include <initializer_list>
#include <cassert>
#include <iostream>

class cpp_160 {
public:
    int do_algebra(std::vector<std::string> ops, std::initializer_list<int> nums) {
        if (ops.size() != static_cast<size_t>(nums.size())) {
            return -1;
        }
        
        int result = *std::begin(nums);
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*") {
                result *= *std::next(std::begin(nums), i);
            } else if (ops[i] == "//") {
                result /= *std::next(std::begin(nums), i);
            }
        }
        
        return result;
    }
};

int main() {
    int output = cpp_160{}.do_algebra({"*", "//"}, {7, 3, 4});
    std::cout << output << std::endl;
}