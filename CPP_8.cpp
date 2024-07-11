#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your implementation for issame function
}

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));

    // Rest of your main function implementation
    return 0;
}