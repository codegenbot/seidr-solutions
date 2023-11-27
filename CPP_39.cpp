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
    int a = 0;
    int b = 1;
    int count = 0;
    int result = 0;
    
    while (count < n) {
        int temp = a + b;
        a = b;
        b = temp;
        
        if (isPrime(b)) {
            count++;
            result = b;
        }
    }
    
    return result;
}

int main() {
    cout << prime_fib(1) << endl;
    cout << prime_fib(2) << endl;
    cout << prime_fib(3) << endl;
    cout << prime_fib(4) << endl;
    cout << prime_fib(5) << endl;
    
    return 0;
}