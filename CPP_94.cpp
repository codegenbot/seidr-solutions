#include <vector>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int result = -1;
    for (int i = 1; i <= 100000; i++) {
        bool isPrime = true;
        if (i < 2)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            int maxVal = 0;
            for (int val : lst) {
                if (val > maxVal && val == i)
                    maxVal = val;
            }
            if (maxVal != 0) {
                result = sumOfDigits(maxVal);
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> lst = { };
    cout << skjkasdkd(lst) << endl;
    return 0;
}