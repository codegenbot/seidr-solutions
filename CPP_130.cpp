#include <iostream>
#include <vector>

bool issame(const vector<int> a, const vector<int> b) {
    return a == b;
}

vector<int> tri(int n);

int main() {
    assert(issame(tri(1), {1, 3}));
    return 0;
}