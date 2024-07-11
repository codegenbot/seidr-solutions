```cpp
#include <vector>
#include <algorithm>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    // Rest of your code...
}