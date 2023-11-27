#include <vector>
#include <algorithm>
#include <cassert>

vector<int> get_odd_collatz(int n);

bool is_same(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return (a == b);
}

vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
        collatz.push_back(n);
    }

    vector<int> odd_collatz;
    for(int i = 0; i < collatz.size(); i++){
        if(collatz[i] % 2 != 0){
            odd_collatz.push_back(collatz[i]);
        }
    }

    sort(odd_collatz.begin(), odd_collatz.end());

    return odd_collatz;
}

int main() {
    assert(is_same(get_odd_collatz(1), {1}));
}