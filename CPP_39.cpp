#include <vector>
#include <cmath>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    
    while (true) {
        if ((b > n) || (count == n)) break;
        
        bool isPrime = true;
        for (int i = 2; i <= sqrt(b); i++) {
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
    
    return b;
}