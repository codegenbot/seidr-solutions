#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        if ((n - i) % 2 == 0) {
            int doubled_digit = digits[i] * 2;
            sum += doubled_digit > 9 ? doubled_digit - 9 : doubled_digit;
        } else {
            sum += digits[i];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}