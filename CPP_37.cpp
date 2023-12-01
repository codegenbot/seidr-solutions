#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b);

vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = l[i];
        } else {
            l_prime[i] = l_prime[i-1];
        }
    }
    sort(l_prime.begin(), l_prime.end());
    return l_prime;
}

bool issame(vector<float> a, vector<float> b){
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

int main(){
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}