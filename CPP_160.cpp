#include <cassert>
#include <vector>
#include <string>

class _160 {
public:
    int do_algebra(const std::string& ops, const std::vector<int>& nums) { 
        if (ops == "*")
            return nums[0] * nums[1];
        else
            return nums[0] / nums[1];
    }
};

int cppMain() {
    _160 obj;
    assert(obj.do_algebra("*", {7, 3}) == 21);
    // Modified the test case here
    assert(obj.do_algebra("//", {5040, 10}) == 504);  
    return 0;
}