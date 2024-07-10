#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
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

int main() {
    vector<int> result = count_up_to(101);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}