#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    for(int i = std::min(a, b); i > 0; --i) {
        if((a % i == 0) && (b % i == 0))
            std::cout << i << std::endl;
    }
    return 0;
}