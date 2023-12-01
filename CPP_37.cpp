#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    for(int i=0; i<l.size(); i++){
        if(i % 2 != 0){
            l_prime.insert(l_prime.begin() + i, l[i]);
        }
    }
    return l_prime;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == vector<float>({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}