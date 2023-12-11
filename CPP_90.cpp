```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

optional<int> next_smallest(const vector<int>& lst);

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(&v).has_value() && *next_smallest(&v) == -35);
    return 0;
}

optional<int> next_smallest(const vector<int>& lst) {
    // implementation of the function goes here
}
```

The issue is that the function `next_smallest` is not declared before it's called. To fix this, you need to declare the function before calling it. I have moved the declaration of the function `next_smallest` before its usage in the `main` function.