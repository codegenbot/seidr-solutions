```cpp
#include <cassert>
#include <vector>
#include <string>

class _160 {
public:
    int do_algebra(int op, const std::vector<int>& nums) { 
        if (op == 1)
            return nums[0] * nums[1];
        else
            return nums[0] / nums[1];
    }
};

int cppMain() {
    _160 obj;
    assert(obj.do_algebra(1, {7, 3}) == 21);
    return 0;
}