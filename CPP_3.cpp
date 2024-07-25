#include <vector>
#include <cassert>

class Solution {
public:
    static bool below_zero(const std::vector<int>& operations) {
        int balance = 0;
        for (int op : operations) {
            balance += op;
            if (balance < 0) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    assert(Solution::below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    return 0;
}