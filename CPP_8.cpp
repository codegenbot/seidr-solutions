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
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};
    
    std::vector<int> result = sum_product(vec1);
    
    if (issame(vec1, vec2)) {
        for (int num : result) {
            std::cout << num << " ";
        }
    }
    
    return 0;
}