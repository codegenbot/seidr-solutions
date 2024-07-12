#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    
    int result = gcd(a, b);
    std::cout << result;
    
    return 0;
}