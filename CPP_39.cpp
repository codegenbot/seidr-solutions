#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    int first = 0, second = 1, count = 2;
    while (count < n) {
        int temp = second;
        second = first + second;
        first = temp;
        if (isPrime(second)) {
            count++;
        }
    }
    return second;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}