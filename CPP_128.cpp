#include <cassert>
#include <vector>

int prod_signs(std::vector<int> nums) {
    int product = 1;
    for (int num : nums) {
        product = (num > 0) ? product : (num < 0) ? -product : 0;
    }
    return product;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}