#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    // Compare vectors element-wise
    return a == b;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    // Fix assert statement comparing the results of sum_product function
    assert(issame(sum_product({10}), {10, 10}));
    
    return 0;
}