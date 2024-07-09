#include <cassert>
#include <vector>

class _160 {
public:
    int do_algebra(int op, std::vector<int> nums) { 
        if (op == 1)
            return nums[0] * nums[1];
        else
            return nums[0] / nums[1];
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra(1, {7, 3, 4}) == 8); 
    return 0;
}