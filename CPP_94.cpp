#include <vector>

int main() {
    std::vector<int> lst;
    int num;
    while (true) {
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    
    instance = skjkasdkd(lst);
    return 0;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
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