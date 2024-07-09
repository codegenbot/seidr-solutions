#include<vector>
using namespace std;

bool is_prime(int num){
    if(num < 2)
        return false;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

vector<int> count_up_to(int n){
    vector<int> primes;
    for(int i=2; i<n; i++){
        if(is_prime(i)){
            primes.push_back(i);
        }
    }
    return primes;
}