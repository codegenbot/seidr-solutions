```c
#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        cout << "Is " << i << " a prime number: " << is_prime(i) << endl;
    }
    return 0;