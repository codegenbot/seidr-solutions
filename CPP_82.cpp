```cpp
#include <iostream>

bool prime_length(int len) {
    for (int i = 2; i <= len / 2; i++) {
        if (len % i == 0)
            return false;
    }
    return true;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    assert(prime_length(input) == true);
    return 0;
}