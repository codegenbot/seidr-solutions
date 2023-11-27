#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l);

bool issame(vector<float> a, vector<float> b);

int main(){
    vector<float> sort_even(vector<float> l);

    vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    assert(result == vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    return 0;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime[i] = l[i];
        }
    }
    sort(l_prime.begin(), l_prime.end());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 != 0){
            l_prime[i] = l[i];
        }
    }
    return l_prime;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}