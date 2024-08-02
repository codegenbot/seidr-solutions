#include <iostream>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> l = {};
    assert(issame(get_positive(l), vector<float>()) );
    return 0;
}