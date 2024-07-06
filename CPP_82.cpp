#include <string>
#include <cctype>

bool prime_length(std::string str) {
    int len = 0;
    for (char c : str) {
        if (isdigit(c)) {
            len++;
        }
    }
    return prime(len);

}

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}