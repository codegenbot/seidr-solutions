#include <iostream>
#include <vector>

std::vector<int> findIndices(const std::vector<int>& numbers, int a, int b) {
    std::vector<int> indices;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % a == 0 && numbers[i] % b == 0) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n, a, b;
    std::vector<int> numbers;
    
    std::cin >> n >> a >> b;
    
    numbers.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    std::vector<int> result = findIndices(numbers, a, b);
    
    for (int idx : result) {
        std::cout << idx << " ";
    }
    
    return 0;
}