#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i])
            return false;
    }

    return true;
}

vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        collatz.push_back(n);
    }

    vector<int> oddCollatz;
    for(int i = 0; i < collatz.size(); i++){
        if(collatz[i] % 2 != 0){
            oddCollatz.push_back(collatz[i]);
        }
    }

    sort(oddCollatz.begin(), oddCollatz.end());

    return oddCollatz;
}

int main(){
    assert(issame(get_odd_collatz(1), {1}));

    return 0;
}