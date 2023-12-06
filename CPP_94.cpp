```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int largestPrime(vector<int> lst) {
    int max = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > max && isPrime(lst[i])) {
            max = lst[i];
        }
    }
    return sumDigits(max);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
```