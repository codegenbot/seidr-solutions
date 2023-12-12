#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

int largestPrime(vector<int> lst) {
    int max = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > max && isPrime(lst[i])) {
            max = lst[i];
        }
    }
    return sumDigits(max);
}

int main() {
    vector<int> lst = {127, 97, 8192};
    assert (largestPrime(lst) == 10);
    return 0;
}