#include <vector>
#include <cassert>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::pair<int, int> b_sum_product = sum_product(b);
    return sum_product(a) == b_sum_product;
}