#include <initializer_list>
#include <bits/stdc++.h>

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