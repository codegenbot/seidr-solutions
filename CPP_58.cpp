#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    vector<int> a_copy = a;
    vector<int> b_copy = b;
    sort(a_copy.begin(), a_copy.end());
    sort(b_copy.begin(), b_copy.end());
    return a_copy == b_copy;
}

int main() {
    // Test cases
    assert(isSame({4, 3, 2, 8}, {}) == false);
    assert(isSame({1, 2, 3}, {3, 2, 1}) == true);
    assert(isSame({5, 6, 7}, {8, 9}) == false);

    return 0;
}