#include <vector>
#include <cassert>

std::vector<int> sumAndProduct(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sumAndProduct({10}), {10, 10}));
    
    return 0;
}