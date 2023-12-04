#include <iostream>
#include <cmath>

using namespace std;

int largest_divisor(int n) {
    int divisor = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisor = i;
        }
    }
    return divisor;
}