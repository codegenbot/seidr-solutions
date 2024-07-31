#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l);

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}

vector<float> sort_even(vector<float> l) {
    // Function implementation here
    return l;
}