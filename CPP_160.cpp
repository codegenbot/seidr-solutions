#include <cassert>
#include <vector>

class _160 {
public:
    int do_algorithm(int op, std::vector<int> nums) { 
        if (op == "*")
            return nums[0] * nums[1];
        else if (op == "/")
            return nums[0] / nums[1];
        else
            return 0;
    }
};

int main() {
    _160 obj;
    assert(obj.do_algorithm("*", {7, 3}) == 21);
    int res = obj.do_algorithm("//", {7, 3, 4});
    return 0;
}