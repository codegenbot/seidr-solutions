#include <vector>

int main() {
    vector<int> lst;
    int sum = 0;
    cin >> lst.size();
    for (int i = 0; i < lst.size(); i++) {
        cin >> lst[i];
    }
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    while (maxPrime) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    cout << sum;
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}