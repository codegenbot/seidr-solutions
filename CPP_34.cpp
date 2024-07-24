#include <iostream>
#include <set>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const set<int>& a, const set<int>& b) {
    return a == b;
}

int main() {
    set<int> s1 = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    set<int> s2 = {0, 2, 3, 5, 9, 123};
    assert(issame(s1, s2));
    return 0;
}