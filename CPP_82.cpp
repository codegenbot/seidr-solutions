#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(std::string str) {
    int len = str.length();
    return is_prime(len);
}

int main() {
    assert (prime_length("0") == false);
    // Additional test cases
    assert (prime_length("hello") == true);    // Length 5 is prime
    assert (prime_length("world!") == false);  // Length 6 is not prime
    assert (prime_length("1234567") == true);  // Length 7 is prime
    assert (prime_length("hi") == false);      // Length 2 is prime
    return 0;
}