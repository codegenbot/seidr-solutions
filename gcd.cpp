#include <iostream>
#include <algorithm>

int main() {
    int a, b;
    std::cin >> a >> b;
    int result = std::__gcd(a, b);
    std::cout << result << std::endl;
    return 0;
}