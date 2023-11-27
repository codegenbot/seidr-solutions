#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l[i] = l_prime[j];
            j++;
        }
    }
    return l;
}

int main(){
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 2, 4, 5, 23, 3, 11, 12, -10}));
    
    return 0;
}