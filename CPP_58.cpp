```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return all(a.begin(), a.end(), [&](int x){ return find(b.begin(), b.end(), x) != b.end(); }) &&
           all(b.begin(), b.end(), [&](int x){ return find(a.begin(), a.end(), x) != a.end(); });
}

int main() {
    vector<int> a{4, 3, 2, 8};
    vector<int> b;

    assert(issame(a, b));

    return 0;
}
```