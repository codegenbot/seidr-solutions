#include <iostream>

bool is_prime(long long n);

bool is_prime(long long n){
    if(n < 2) return false;
    for(long long i=2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << std::boolalpha << is_prime(13441 * 19) << std::endl;
    return 0;
}