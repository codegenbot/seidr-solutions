#include <cassert>
#include <vector>

class _160 {
public:
    int do_algebra(int op, std::vector<int> nums) {
        if (nums.size() != 2)
            return -1;
        int result = nums[0];
        switch(op) {
            case 1: // multiplication
                result *= nums[1];
                break;
            case 2: // division
                if(nums[1] == 0)
                    return -1; // division by zero
                result /= nums[1];
                break;
        }
        return result;
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra(1, {7, 3}) == 7);
    assert(obj.do_algebra(2, {14, 2}) == 7);
    return 0;
}