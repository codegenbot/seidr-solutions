#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    auto result = sum_product({10});
    assert(result == std::make_tuple(10, 10));
    
    return 0;
}