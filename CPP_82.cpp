```
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::string str;
    std::cin >> str;
    int len = str.length();
    bool result = isPrime(len);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}