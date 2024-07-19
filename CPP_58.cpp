```cpp
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool common(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return (s1 == s2 || s1.issubset(s2) || s2.issubset(s1));
}

int main() {
    assert(common({4, 3, 2, 8}, {4, 3, 2, 8});
    return 0;
}