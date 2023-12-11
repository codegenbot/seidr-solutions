```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <optional> // include header file for optional
using namespace std;

optional<int> next_smallest(vector<int>& lst);

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v) == -35);
    return 0;
}

optional<int> next_smallest(vector<int>& lst) {
    // implementation of the function goes here
}
```
Note: I have removed one of the declarations for `next_smallest` and included the header file for `optional`.