```
#include <string>
#include <cassert>

int main() {
    std::string str;
    int n;
    bool is_prime;

    std::cout << "Enter a number: ";
    std::cin >> str;
    n = std::stoi(str);

    if (n <= 1)
        is_prime = false;
    else if (n == 2)
        is_prime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    std::cout << "The given number " << str << " is prime? " << is_prime << std::endl;

    return 0;
}