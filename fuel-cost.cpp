#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int n;
    while (std::cin >> n) {
        numbers.push_back(n);
    }
    
    int sum = 0;
    for (int num : numbers) {
        sum += std::max(num / 3 - 2, 0);
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}