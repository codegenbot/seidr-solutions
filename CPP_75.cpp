#include<iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 6) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (is_prime(i) && a % i == 0) {
            int q = a / i;
            for (int j = i + 1; j <= q / 2; ++j) {
                if (is_prime(j) && q % j == 0 && is_prime(q / j)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    cout << (is_multiply_prime(n) ? "true" : "false") << endl;
    return 0;
}