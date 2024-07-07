#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int fibNum = 0, prevFib = 1, count = 0;
    while (true) {
        int temp = fibNum + prevFib;
        if (isPrime(temp)) {
            if (++count == n)
                return temp;
            fibNum = prevFib;
            prevFib = temp;
        }
    }
}

int main() {
    for (int i = 1; i <= 5; i++)
        cout << prime_fib(i) << endl;
    return 0;
}