```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0, sumDigits = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (isPrime(lst[i])) {
            if (lst[i] > maxPrime) {
                maxPrime = lst[i];
            }
        }
    }
    while (maxPrime != 0) {
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```
The corrected code should look like this.