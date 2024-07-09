#include <cassert>
#include <vector>

class _160 {
public:
    int do_algebra(int ops, std::vector<int> nums) { 
        if (ops == "*")
            return nums[0] * nums[1];
        else
            return nums[0] / nums[1];
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra("*", {7, 3}) == 21); 
    return 0;
}