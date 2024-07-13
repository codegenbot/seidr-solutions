#include <algorithm>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::gcd(std::abs(a), std::abs(b)) << std::endl;
    return 0;
}