#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        std::cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += digits[i];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}