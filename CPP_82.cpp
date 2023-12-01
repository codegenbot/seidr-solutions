#include <string>
#include <cassert>

bool prime_length(std::string str) {
    int length = str.length();
    
    if (length <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test cases
    assert(prime_length("Hello") == false);
    assert(prime_length("a") == false);
    assert(prime_length("abb") == true);
    assert(prime_length("") == false);
    
    return 0;
}