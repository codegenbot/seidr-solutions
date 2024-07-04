#include<stdio.h>
using namespace std;
int modp(int n, int p) {
    long long result = 1;
    long long base = 2;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % p;
        }
        base = (base * base) % p;
        n /= 2;
    }
    return result;
}