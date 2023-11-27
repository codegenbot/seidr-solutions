#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> count_up_to(int n){
    std::vector<int> primes;
    if(n <= 1){
        return primes;
    }
    primes.push_back(2);
    for(int i = 3; i < n; i += 2){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
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

int solve_problem(){
    assert(issame(count_up_to(100) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}

int main() {
    solve_problem();
    return 0;
}