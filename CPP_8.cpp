#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> sum_product(const std::vector<int>& nums){
    std::vector<int> result(2, 0);
    for(auto num : nums){
        result[0] += num;
        result[1] *= num;
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), std::vector<int>({10, 0}));
    
    return 0;
}