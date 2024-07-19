#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3}, {1, 2, 6}));
    return 0;
}