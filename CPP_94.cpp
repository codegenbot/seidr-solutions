#include <vector>

int main() {
    vector<int> lst;
    int maxPrime = 0;
    for (int i = 1; ; i++) {
        if (isPrime(i)) {
            lst.push_back(i);
            if (i > maxPrime) {
                maxPrime = i;
            }
            if (i == 10001) break;
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    cout << "Sum of digits is: " << sumOfDigits << endl;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}