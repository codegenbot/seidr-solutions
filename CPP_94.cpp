Here is the completed code:

vector<int> lst;

int maxPrime = -1;
for (int i : lst) {
    if (isPrime(i)) {
        if (i > maxPrime) {
            maxPrime = i;
        }
    }
}

if (maxPrime < 0) {
    return 0; // No primes found
} else {
    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}