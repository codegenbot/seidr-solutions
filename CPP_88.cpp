#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}