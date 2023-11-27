#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int n);

int main(){
    assert(([]() {
        std::vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        std::vector<int> b = count_up_to(101);
        return issame(a, b);
    })());
    return 0;
}

std::vector<int> count_up_to(int n){
    std::vector<int> primes;
    if(n <= 1){
        return primes;
    }
    primes.push_back(2);
    for(int i=3; i<n; i+=2){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
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