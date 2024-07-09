#include <string>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) 
        return false;
        
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) 
            return false;
    }
    
    return true;
}

bool prime_length(std::string str) {
    return isPrime(static_cast<int>(str.length() + 1)); // **Add 1 to the length before checking for prime**
}