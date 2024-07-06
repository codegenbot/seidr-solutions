#include <initializer_list>
#include <bits/stdc++.h>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            pile.push_back(2*i-1);
        } else {
            pile.push_back(2*i);
        }
    }
    return pile;
}