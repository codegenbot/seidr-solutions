#include <string>

bool prime_length(const std::string& str) {
    return isPrime(static_cast<int>(str.length()));
}