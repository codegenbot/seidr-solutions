#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> l_prime(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime[i] = l[i];
        }
    }
    std::sort(l_prime.begin(), l_prime.end());
    for(int i = 1; i < l.size(); i += 2){
        l_prime[i] = l[i];
    }
    return l_prime;
}

int main(){
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}