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
    for (int i = 2; i <= a / 3; i++) {
        if (is_prime(i) && a % i == 0) {
            for (int j = i + 1; j <= a / i; j++) {
                if (is_prime(j) && a % (i * j) == 0 && is_prime(a / (i * j))) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number less than 100: ";
    cin >> num;
    
    if (is_multiply_prime(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}