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
        bool isPrime = true;
        if (i <= 1)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i > maxPrime)
            maxPrime = i;
    }
    return sumOfDigits(maxPrime);
}

int main() {
    vector<int> lst = {127, 97, 8192};
    cout << largestPrime(lst) << endl;
}