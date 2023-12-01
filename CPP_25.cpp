#include <vector>
#include <cassert>

vector<int> factorize(int n){
    vector<int> factors;
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            factors.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    return factors;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    assert (issame(factorize(3 * 2 * 3) , {2, 3, 3}));
    // Rest of the main function
    return 0;
}