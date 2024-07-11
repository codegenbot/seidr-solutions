Here is the completed code:

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int findLargestPrime(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    return maxPrime;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> lst = /* your input here */;
    int maxPrime = findLargestPrime(lst);
    if (maxPrime > 0) {
        int sum = sumOfDigits(maxPrime);
        return sum;
    } else {
        return -1; // or some other error value
    }
}