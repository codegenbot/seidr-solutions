#include <cassert>
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
    for(int i=2; i<n; i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
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

int main(){
    vector<int> result = count_up_to(10);

    vector<int> expected = {2, 3, 5, 7};

    assert(issame(result, expected));
    
    return 0;
}