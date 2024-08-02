#include <iostream>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> l = {};
    assert(get_positive(l).empty());
    return 0;
}