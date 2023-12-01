#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> sort_even(vector<float> l);

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;

    for(int i = 0; i < l.size(); i+=2){
        l_prime.push_back(l[i]);
    }

    sort(l_prime.begin(), l_prime.end());

    return l_prime;
}

int main(){
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 2, 4, 8, 12, 23}));

    return 0;
}