#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

int main() {
    assert(pluck({7, 9, 7, 1}) == {});
    return 0;
}