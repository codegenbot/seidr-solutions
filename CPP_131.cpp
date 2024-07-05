#include<stdio.h>
using namespace std;

int digits(int n) {
    int product = 1;
    bool hasOdd = false;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = true;
        }
        n /= 10;
    }
    
    return hasOdd ? product : 0;
}