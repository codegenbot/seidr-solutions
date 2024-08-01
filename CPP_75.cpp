#include <iostream>

using namespace std;

bool is_multiply_prime(int num);

bool is_multiply_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (is_multiply_prime(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}