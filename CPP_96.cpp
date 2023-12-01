#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n){
    vector<int> primes;

    if(n <= 1){
        return primes;
    }

    primes.push_back(2);

    for(int i = 3; i <= n; i += 2){
        bool isPrime = true;

        for(int j = 3; j * j <= i; j += 2){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            primes.push_back(i);
        }
    }

    return primes;
}