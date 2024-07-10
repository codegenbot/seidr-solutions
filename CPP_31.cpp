#include <iostream>

bool is_prime(long long n){
    if(n <= 1){
        return false;
    }
    for(long long i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    std::cin >> num;
    
    if(is_prime(num)){
        std::cout << num << " is prime.";
    } else {
        std::cout << num << " is not prime.";
    }
    
    return 0;
}