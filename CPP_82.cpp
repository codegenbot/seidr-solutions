#include <string>

bool prime_length(std::string str) {
    int length = str.length();
    if (length <= 1) return false;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) return false;
    }
    return true;
}