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

bool issame(const std::pair<int, int>& a, const std::vector<int>& b) {
    std::pair<int, int> b_values = sum_product(b);
    return a.first == b_values.first && a.second == b_values.second;
}

int main() {
    assert(issame(sum_product({10}), {10}));
    
    return 0;
}