#include <vector>

int skjkasdkd(vector<int> lst) {
    int largestPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }

    int sum = 0;
    while (largestPrime != 0) {
        sum += largestPrime % 10;
        largestPrime /= 10;
    }

    return sum;
}