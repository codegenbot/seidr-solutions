#include <vector>
#include <iostream>

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
    vector<int> lst1 = {2, 3, 4, 5};
    vector<int> lst2 = {11, 13, 17};

    int result1 = skjkasdkd(lst1);
    int result2 = skjkasdkd(lst2);

    cout << "Result for lst1: " << result1 << endl;
    cout << "Result for lst2: " << result2 << endl;

    return 0;
}