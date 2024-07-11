#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> unique_digits(vector<int> x); // Function prototype

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}