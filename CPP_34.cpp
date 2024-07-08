```cpp
#include <algorithm>

vector<int> std::unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), unique_end(l.end())));
    return result;
}

auto unique_end(iterator it) -> iterator {
    for (; it != end(); ++it)
        if (*it == *(prev(it)))
            break;
    return it;
}