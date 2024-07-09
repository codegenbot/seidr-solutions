```cpp
#include <initializer_list>
#include <cassert>

class cpp_160 {
public:
    int do_algebra(const std::vector<std::string>& ops, const std::initializer_list<int>& nums) {
        if (ops.size() != static_cast<size_t>(nums.size())) {
            return -1;
        }
        
        int result = *nums.begin();
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*") {
                result *= *(nums.begin() + i);
            } else if (ops[i] == "//") {
                result /= *(nums.begin() + i);
            }
        }
        
        return result;
    }
};

int main() {
    cpp_160 obj;
    assert(obj.do_algebra({{"//", "*"}}, {7, 3, 4}) == 8);
}