#include <iostream>
using namespace std;

bool is_multiply_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number less than 100: ";
    cin >> num;
    cout << (is_multiply_prime(num) ? "true" : "false") << endl;

    return 0;
}