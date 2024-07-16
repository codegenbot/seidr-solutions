#include <algorithm>
#include <vector>

bool issame(vector<int>& a, vector<int>& b) {
    return a == b;
}

assert(issame(std::unique(l.begin(), l.end()), {0, 2, 3, 5, 9, 123}));