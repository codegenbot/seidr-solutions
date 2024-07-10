#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sum_product(const std::vector<int>& nums){
    std::vector<int> result(2, 1);
    for(auto num : nums){
        result[0] += num;
        result[1] *= num;
    }
    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 0}));
    
    return 0;
}