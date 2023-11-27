#include <iostream>
using namespace std;

bool is_prime(long long n){
    if(n <= 1){
        return false;
    }
    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout << boolalpha;
    cout << is_prime(6) << endl;
    cout << is_prime(101) << endl;
    cout << is_prime(11) << endl;
    cout << is_prime(13441) << endl;
    cout << is_prime(61) << endl;
    cout << is_prime(4) << endl;
    cout << is_prime(1) << endl;
    
    return 0;
}