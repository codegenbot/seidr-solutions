#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    int count = 0;
    for (int i = 2; i <= a / 2 && count < 3; i++) {
        if (is_prime(i) && a % i == 0) {
            count++;
            a /= i;
        }
    }
    return count == 3 && is_prime(a);
}

int main() {
    int num;
    cin >> num;
    cout << (is_multiply_prime(num) ? "true" : "false") << endl;
    return 0;
}