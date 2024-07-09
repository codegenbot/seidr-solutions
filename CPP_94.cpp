int sumOfUniqueDigits(vector<int> numbers) {
    int maxPrime = 0;
    for (int num : numbers) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfUniqueDigits(numbers);
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