#include <vector>
#include <cassert>
#include <utility>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = 0;
    int product = 1;
    
    sum += numbers.first;
    product *= numbers.second;
    
    return {sum, product};
}