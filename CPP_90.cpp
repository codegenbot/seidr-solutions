```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <optional>
using namespace std;

optional<int> next_smallest(const vector<int>& lst);

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v).has_value() && *next_smallest(v) == -35);
    return 0;
}

optional<int> next_smallest(const vector<int>& lst) {
    if (lst.empty()) {
        return std::nullopt;
    }
    int smallest = *lst.begin();
    for (const auto& x : lst) {
        if (x < smallest) {
            smallest = x;
        }
    }
    return smallest;
}
```