#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

bool issame(const unordered_set<int>& a, const unordered_set<int>& b) {
    return a == b;
}

int main() {
    assert(issame(unordered_set<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), unordered_set<int>({0, 2, 3, 5, 9, 123})));
    return 0;
}