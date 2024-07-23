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
        if ((n - i) % 2 != 0) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        } else {
            sum += digits[i];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}