Here is the completed code:

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (num > 0 && isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }

    if (maxPrime == -1) {
        return 0; // or any other default value you want
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