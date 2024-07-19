#include <vector>
#include <cassert>
#include <utility>

bool issame(const std::pair<int, int>& a,const std::pair<int, int>& b){
    return a == b; // Compare the pairs directly
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return std::make_pair(sum, product);
}

int main() {
    auto result = sum_product({10});
    assert(issame(result, sum_product({10})));
    return 0;
}