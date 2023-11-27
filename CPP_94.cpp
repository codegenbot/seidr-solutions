int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        if (num < 2) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime && num > maxPrime) {
            maxPrime = num;
        }
    }

    int sumDigits = 0;
    while (maxPrime > 0) {
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }

    return sumDigits;
}