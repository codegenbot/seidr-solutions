#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    return a == b;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
}