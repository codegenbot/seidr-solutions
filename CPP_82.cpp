#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

bool prime_length(std::string str) {
    int length = str.length();
    if (length <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(length); i++) {
        if (length % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("11") == true);
    assert(prime_length("1234") == false);
    
    std::cout << "All test cases passed!" << std::endl;
    
    return 0;
}