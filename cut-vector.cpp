#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;
    
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < numbers.size(); ++i) {
        int diff = abs(std::accumulate(numbers.begin(), numbers.begin() + i, 0) - std::accumulate(numbers.begin() + i, numbers.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        std::cout << numbers[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    for (int i = cut_index; i < numbers.size(); ++i) {
        std::cout << numbers[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    return 0;
}