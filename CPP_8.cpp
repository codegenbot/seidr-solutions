```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return vector<int>{number * (number + 1)};
}

bool issame(int num) {
    std::vector<int> v = {num};
    return issame(v, v);
}

int main() {
    assert(issame({10}) == {10, 10});
    return 0;
}
```