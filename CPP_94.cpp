#include <vector>
#include <cassert>

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    vector<int> lst1 = {2, 3, 5};
    assert(skjkasdkd(lst1) == 7);
    
    vector<int> lst2 = {11, 13, 17};
    assert(skjkasdkd(lst2) == 9);
    
    return 0;
}