#include <vector>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }
}

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return std::vector<int>{sum, product};
}

int main() {
    assert(std::issame(sum_product({10}), std::vector<int>{10, 10}));
    
    return 0;
}