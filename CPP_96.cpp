#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

vector<int> count_upto(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
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

void main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result = count_upto(n);
    cout << "Primes up to " << n << ": ";
    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;
}