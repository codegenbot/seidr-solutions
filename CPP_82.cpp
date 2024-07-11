#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(string str){
    int length = str.length();
    return isPrime(length);
}

int main() {
    assert(prime_length("0") == false);
    return 0;
}