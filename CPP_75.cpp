int count = 0;
for (int i = 2; i <= a; i++) {
    if (isPrime(i)) {
        for (int j = i; j <= a / i; j++) {
            if (isPrime(j) && i * j == a) {
                return true;
            }
        }
    }
}

return false;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}