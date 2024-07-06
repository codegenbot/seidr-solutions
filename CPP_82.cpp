```cpp
#include <string>

bool prime_length(const std::string& str){
    int len = str.length();
    for(int i = 2; i <= len; i++){
        if(len % i == 0 && isPrime(i))
            return true;
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}