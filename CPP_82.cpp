#include <cmath>
#include <string>
#include <cassert>

bool prime_length(std::string str) {
    int length = str.length();
    if (length <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(length); i++) {
        if (length % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(prime_length("0") == false);
    // Add more test cases here if needed

    return 0;
}