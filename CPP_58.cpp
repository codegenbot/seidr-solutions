```
#include <iostream>
#include <vector>

using size_type = std::size_t;

bool issame(const vector<int>& a) {
    return a.size() == 0 && std::equal(a.begin(), a.end(), a.begin());
}

int main() {
    assert (issame({4, 3, 2, 8}));
    return 0;
}
```