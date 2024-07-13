```cpp
#include <vector>
#include <cmath>

int findMaxPrime(std::vector<int> lst) {
    int maxPrime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * std::sqrt(n) <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}
int main() {
    assert(findMaxPrime({127, 97, 8192}) == 10);
    return 0;
}