```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

template<typename T>
bool is_same(const vector<T>& a, const vector<T>& b) {
    return a == b;
}

int main() {
    assert(is_same({10}, {10}));
    return 0;
}
```