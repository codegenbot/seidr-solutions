#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
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

int largestPrimeDigitSum(vector<int> lst) {
    int largestPrime = -1;
    for (int num : lst) {
        if (isPrime(num) && num > largestPrime) {
            largestPrime = num;
        }
    }
    return largestPrime == -1 ? 0 : sumOfDigits(largestPrime);
}

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    int result = largestPrimeDigitSum(lst);
    cout << result << endl;

    return 0;
}