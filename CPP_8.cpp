```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return number * (number + 1);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({10}, {10, 10}));
    return 0;
}
```