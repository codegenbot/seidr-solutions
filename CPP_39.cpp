#include <vector>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    
    while (true) {
        if (b > n) break;
        
        bool isPrime = true;
        for (int i = 2; i * i <= b; i++) {
            if (b % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) count++;
        
        int temp = a;
        a = b;
        b = temp + b;
    }
    
    return a;
}