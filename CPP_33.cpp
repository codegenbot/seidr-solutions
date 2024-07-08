#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::sort(l.begin() + i - 2, l.begin() + i + 1);
        }
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 3, 8, 4, 1, 9}));
    
    return 0;
}