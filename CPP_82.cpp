```cpp
#include <iostream>
#include <cstring>
#include <cassert>
#include <string>

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

void main() {
    const char* str = "0123";
    bool result = true;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int n = str[i] - '0';
            if (!isPrime(n)) {
                result = false;
                break;
            }
        } else {
            continue;
        }
    }

    std::cout << "Is the length of '" << str << "' a prime number? " << (result ? "yes" : "no") << std::endl;
}