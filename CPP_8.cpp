#include <vector>
#include <cassert>

std::vector<int> sum_product(std::vector<int> numbers);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    
    std::vector<int> result;
    result.push_back(sum);
    result.push_back(product);
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main() {
    std::vector<int> result = sum_product({10});
    assert(issame(result, {10, 10}));
    
    return 0;
}