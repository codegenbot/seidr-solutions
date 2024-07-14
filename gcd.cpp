#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    for(int i = std::max(std::abs(a), std::abs(b)); i > 0; --i) {
        if(i == __gcd(a, b))
            std::cout << i << std::endl;
    }
    return 0;
}