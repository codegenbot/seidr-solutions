#include <cassert>
using namespace std;

bool is_divisor = false;
bool isPrime(long n) {
    if (n <= 1) return false;
    for (long i = 2; i * i <= n && !is_divisor; ++i) {
        if (n % i == 0) {
            is_divisor = true;
        }
    }
    return !is_divisor;
}

int main() {
    long n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}