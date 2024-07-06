Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for (auto num : lst) {
        if (num > 1) { // prime numbers are greater than 1
            bool isPrime = true;
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && num > maxPrime) {
                maxPrime = num;
            }
        }
    }

    int sumOfDigits = 0;
    while (maxPrime) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }

    return sumOfDigits;
}