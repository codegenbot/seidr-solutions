#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // Function logic here
}

vector<int> sort_third(vector<int> l) {
    // Sort every third element of vector l
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}