#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

vector<int> sort_third(vector<int> l); // Forward declaration

bool issame(vector<int> a, vector<int> b) { // Fix function signature
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime = l;
    vector<int> l_third;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_third.push_back(l[i]);
        }
    }
    
    sort(l_third.begin(), l_third.end());
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = l_third[i/3];
        }
    }
    
    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1})); // Fix assert statement
    
    return 0;
}