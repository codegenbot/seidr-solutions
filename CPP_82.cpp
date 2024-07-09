#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool prime_length(const string& str) {
    int len = str.length();
    return isPrime(len);
}

int main() {
    cout << boolalpha << (prime_length("10") ? "Prime" : "Not Prime") << endl;
    assert(!isPrime(0));
    return 0;
}