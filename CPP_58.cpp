```cpp
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert (issame({4, 3, 2, 8}, {}) == true);
    return 0;
}
```