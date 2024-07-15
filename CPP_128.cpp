#include <vector>

int prod_signs(std::vector<int> nums) {
    int product = 1;
    for (int num : nums) {
        product *= (num > 0) ? 1 : (num < 0) ? -1 : 0;
    }
    return product;
}