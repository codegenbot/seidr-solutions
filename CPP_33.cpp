#include <vector>
#include <algorithm>
#include <cassert>

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

vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> divisible_by_three_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            divisible_by_three_indices.push_back(i);
        }
    }
    sort(divisible_by_three_indices.begin(), divisible_by_three_indices.end());
    for (int i = 0; i < divisible_by_three_indices.size(); i++) {
        l_prime[divisible_by_three_indices[i]] = l[divisible_by_three_indices[i]];
    }
    return l_prime;
}

int main() {
    // main function implementation
    return 0;
}