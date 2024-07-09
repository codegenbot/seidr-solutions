#include <initializer_list>
#include <cassert>

class cpp_160 {
public:
    int main(const std::vector<std::string>& ops, const std::vector<int>& nums) {
        if (ops.size() != nums.size()) {
            return -1;
        }
        
        int result = nums[0];
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*") {
                for (int j = 0; j < nums[i + 1]; j++) {
                    result *= nums[i + 2];
                }
            } else if (ops[i] == "//") {
                while (result % nums[i + 1] != 0) {
                    result++;
                }
            }
        }
        
        return result;
    }
};

int main() {
    cpp_160 obj;
    assert(obj.main({{"//", "*"}}, {7, 3, 4}) == 8);
    return 0;  
}