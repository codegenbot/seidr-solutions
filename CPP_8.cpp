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

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    std::pair<int, int> b_sum_product = sum_product({b.first});
    return a == b_sum_product;
}

int main() {
    assert(issame({10, 0}, {10}));
    
    return 0;
}