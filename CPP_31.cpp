#include <iostream>
using namespace std;

bool is_prime(long long n){
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    cin >> num;
    cout << (is_prime(num) ? "true" : "false") << endl;
    return 0;
}