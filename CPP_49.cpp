#include <iostream>
#include <cassert>

int modp(int n, int p) {
    int result = 1;
    n %= p;
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    
    return result;
}

int main() {
    int n, p;
    std::cin >> n >> p;
    
    if (p == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }
    
    assert(modp(31, 5) == 3);
    
    std::cout << modp(n, p) << std::endl;
    
    return 0;
}