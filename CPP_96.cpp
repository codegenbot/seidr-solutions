#include <vector>
#include <iostream>

using namespace std;

bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        if(i == 2)
            primes.push_back(i);
        else if(i > 2) {
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
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> result = count_up_to(n);

    cout << "Primes up to " << n << ": ";
    for (auto prime : result) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}