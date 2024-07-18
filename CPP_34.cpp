#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(uniqueVec.begin(), uniqueVec.end());
    uniqueVec.erase(unique(uniqueVec.begin(), uniqueVec.end()), uniqueVec.end());

    assert(issame(uniqueVec , {0, 2, 3, 5, 9, 123}));

    return 0;
}