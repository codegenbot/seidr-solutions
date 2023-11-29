#include <iostream>
#include <vector>

using namespace std;

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    vector<int> result = count_up_to(n);
    cout << "Prime numbers less than " << n << ": ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}