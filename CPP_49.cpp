#include <iostream>

int main() {
    int n, p;
    std::cin >> n >> p;
    
    if (p == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }
    
    int result = 1;
    n %= p;
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}