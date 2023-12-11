```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

// Forward declaration of next_smallest
optional<int> next_smallest(vector<int>& lst);

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v) == -35);
    return 0;
}

// Definition of next_smallest
optional<int> next_smallest(vector<int>& lst) {
    // implementation of the function goes here
}
```