#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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

vector<int> sort_third(vector<int> l);

int main() {
    assert (issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    // Other test cases...
    return 0;
}

vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l);
    for(int i=0; i<l_prime.size(); i++){
        if(i%3 == 0){
            sort(l_prime.begin()+i, l_prime.begin()+i+3);
        }
    }
    return l_prime;
}