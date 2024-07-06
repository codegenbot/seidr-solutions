```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.size() % 2 != 0)
        std::sort(array.begin(), array.end());
    else
        std::sort(array.rbegin(), array.rend());
    
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}) , {11, 14, 21, 23}));
}