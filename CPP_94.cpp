```c++
#include <vector>
#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    if (maxPrime != -1) {
        return sumOfDigits(maxPrime);
    } else {
        return 0;
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> lst;
    int num;
    while (true) {
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    cout << "Maximum prime is: " << skjkasdkd(lst) << endl;
    return 0;
}