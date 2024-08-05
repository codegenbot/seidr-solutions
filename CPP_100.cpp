#include <iostream>
#include <vector>
#include <cassert>

namespace std {
    bool issame(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
}

std::vector<int> make_a_pile(int n){
    std::vector<int> result;
    result.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        result.push_back(n);
    }
    return result;
}