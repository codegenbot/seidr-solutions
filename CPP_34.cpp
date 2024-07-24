#include <iostream>
#include <set>
#include <cassert>

using namespace std;

bool issame(const set<int>& a, const set<int>& b) {
    return a == b;
}

int main() {
    assert(issame(set<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), set<int>({0, 2, 3, 5, 9, 123})));
    return 0;
}