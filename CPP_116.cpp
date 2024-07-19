#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main() {
    assert(issame({2, 4, 8, 16, 32}, {2, 4, 8, 16, 32}));
    return 0;
}