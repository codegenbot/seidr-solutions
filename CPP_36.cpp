#include <iostream>

using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && countSeven(i)) {
            count++;
        }
    }
    return count;
}

bool countSeven(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit == 7) {
            return true;
        }
        n /= 10;
    }
    return false;
}