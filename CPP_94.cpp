int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (num <= 1) {
            continue;
        }
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            maxPrime = max(maxPrime, num);
        }
    }

    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }

    return sum;
}