#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;
    vector<float> even_values;

    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = even_values[i/2];
        }
    }

    return l_prime;
}

int main(){
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == vector<float>({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}