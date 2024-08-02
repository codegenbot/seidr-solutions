```cpp
#include <vector>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxPrime = 0;
    for (int i : lst) {
        if (i > maxPrime)
            maxPrime = i;
    }
    for (int i = maxPrime; i >= 2; i--) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            return sumOfDigits(i);
    }
    return 0;
}

int main() {
    vector<int> lst = {127, 97, 8192};
    cout << largestPrime(lst);
}