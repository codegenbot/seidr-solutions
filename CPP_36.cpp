#include <cstdio>

using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && count(i, count)) {
            count++;
        }
    }
    return count;
}

bool count(int num, int &count7) { 
    while (num > 0) {
        if (num % 10 == 7) {
            count7++;
        }
        num /= 10;
    }
    return count7 > 0;
}