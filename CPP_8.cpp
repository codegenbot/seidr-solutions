#include <vector>

std::vector<int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    std::vector<int> numbers = {2, 3, 5};
    std::vector<int> result = sum_product(numbers);
    
    std::vector<int> numbers2 = {2, 3, 5};
    bool same = issame(numbers, numbers2);
    
    return 0;
}