#include <vector>
#include <cassert>

// Function to calculate sum and product
std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

// Function to check if two vectors are the same
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    // Additional test cases if needed
    return 0;
}