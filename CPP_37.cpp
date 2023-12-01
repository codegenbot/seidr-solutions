#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l);

    for(int i = 0; i < l.size(); i += 2){
        l_prime[i/2] = l[i];
    }

    sort(l_prime.begin(), l_prime.end());

    return l_prime;
}

bool is_same(vector<float> a, vector<float> b){
    return a == b;
}

int main(){
    assert(is_same(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}