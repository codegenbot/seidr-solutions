#include <vector>

using namespace std;

int skjkasdkd(vector<int> lst) {
    int max_prime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > max_prime) {
                max_prime = i;
            }
        }
    }

    int sum_of_digits = 0;
    while (max_prime) {
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }

    return sum_of_digits;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}