#include <initializer_list>
#include <cassert>

class cpp_160 {
public:
    int do_algebra(const std::vector<std::string>& ops, const std::vector<int>& nums) {
        if (ops.size() != nums.size()) {
            return -1;
        }
        
        int result = nums[0];
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*") {
                result *= nums[i + 1];
            } else if (ops[i] == "//") {
                result /= nums[i + 1];
            }
        }
        
        return result;
    }
};

int main() {
    cpp_160 obj;
    assert(obj.do_algebra({{"//", "*"}}, {7, 3, 4}) == 8);
}