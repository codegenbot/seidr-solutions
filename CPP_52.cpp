#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

int main() {
    int n, threshold;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; ++i){
        std::cin >> numbers[i];
    }
    
    std::cout << "Enter the threshold value: ";
    std::cin >> threshold;
    
    assert(!below_threshold(numbers, threshold));
    
    return 0;
}