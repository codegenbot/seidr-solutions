#include <cassert>
#include <vector>

class _160 {
public:
    int do_algebra(std::vector<std::string> ops, std::vector<int> nums) {
        if (ops.size() != nums.size() - 1)
            return -1;
        int result = nums[0];
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*")
                result *= nums[i + 1];
            else
                result /= nums[i + 1];
        }
        return result;
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}