```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool is_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_equal(sum_product({10}), 10));
    return 0;
}
```