#include <iostream>
using namespace std;

bool is_prime(long long n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    cout << (is_prime(n) ? "true" : "false") << endl;
    return 0;
}