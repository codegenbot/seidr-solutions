#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    vector<int> primes;
    int count = 0;
    for (int i = 2; i <= a; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
            count++;
        }
        if (count == 3) {
            break;
        }
    }
    if (count < 3) {
        return false;
    }
    int product = primes[0] * primes[1] * primes[2];
    return product == a;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (is_multiply_prime(num) ? "true" : "false") << endl;
    return 0;
}