#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    int n = str.length();
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
    // ... rest of your code ...
    return 0;
}