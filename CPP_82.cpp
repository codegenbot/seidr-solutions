#include <cmath>
#include <string> // Include the <string> header for using string data type

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(std::string str) { // Specify std::string for string data type
    int length = str.length();
    return is_prime(length);
}