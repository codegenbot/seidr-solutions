#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l) {
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            continue;
        }
        l[i] = l[i - 1];
    }
    sort(l.begin(), l.end());
    return l;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({2.0, 3.0, 1.5, 1.5, 4.0}), {1.5, 1.5, 2.0, 3.0, 4.0}));
    assert(issame(sort_even({1.0, 2.0, 3.0}), {1.0, 1.0, 2.0}));
    assert(issame(sort_even({4.0, 2.5, 1.0}), {1.0, 1.0, 2.5}));
    
    return 0;
}