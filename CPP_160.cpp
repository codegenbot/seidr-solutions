#include <cassert>
#include <vector>
#include <string>

class _160 {
public:
    int do_algebra(const std::vector<std::string>& ops, const std::vector<int>& nums) { 
        if (ops[0] == "*")
            return nums[0] * nums[1];
        else
            return nums[0] / nums[1];
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra({"*", 7, 3}, {7, 3}) == 21);
    assert(obj.do_algebra({"/", 5040, 10}, {5040, 10}) == 504);  
    return 0;
}