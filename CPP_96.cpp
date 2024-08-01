#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> count_up_to(int n){
    std::vector<int> primes;
    for(int i=2; i<n; ++i){
        bool is_prime = true;
        for(int j=2; j*j<=i; ++j){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    std::vector<int> expected_primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 
                                        31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 
                                        73, 79, 83, 89, 97};
    
    std::vector<int> generated_primes = count_up_to(101);
    assert(generated_primes.size() == expected_primes.size() && 
           std::equal(generated_primes.begin(), generated_primes.end(), 
                      expected_primes.begin()));
    
    return 0;
}