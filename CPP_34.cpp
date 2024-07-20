#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Your test cases here
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), vector<int>{0, 2, 3, 5, 9, 123}));

    return 0;
}