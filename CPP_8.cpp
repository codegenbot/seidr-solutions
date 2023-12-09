```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> sum_product(const vector<int>& numbers) {
    return vector<int>{numbers[0] * (numbers[0] + 1)};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10}));
    return 0;
}
```