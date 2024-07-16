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
    std::vector<int> numbers = {2, 3, 4};
    std::vector<int> result = sum_product(numbers);
    
    std::vector<int> test1 = {5, 6};
    std::vector<int> test2 = {5, 6};
    
    if (issame(test1, test2)) {
        std::cout << "Test1 and Test2 are the same" << std::endl;
    } else {
        std::cout << "Test1 and Test2 are different" << std::endl;
    }
    
    return 0;
}