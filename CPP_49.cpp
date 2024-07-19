#include <iostream>

int modp(int n, int p) {
    return n % p;
}

int main() {
    int n, p;
    std::cout << "Enter n and p: ";
    std::cin >> n >> p;
    int result = modp(n, p);
    std::cout << "Result: " << result << "\n";
    return 0;
}