#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return (sum == b[0] && product == b[1]);
}

auto [sum, product] = issame({10, 10}, {100, 100});
```  