#include <vector>
#include <cassert>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return std::make_pair(sum, product);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your comparison logic here
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    
    return 0;
}