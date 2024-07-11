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
    int fibNum = 0, prevFibNum = 1, count = 0;
    
    while (true) {
        int temp = fibNum + prevFibNum;
        if (isPrime(temp)) {
            if (++count == n)
                return temp;
            fibNum = prevFibNum;
            prevFibNum = temp;
        } else {
            fibNum = prevFibNum;
            prevFibNum = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is " << prime_fib(n) << endl;
    return 0;
}