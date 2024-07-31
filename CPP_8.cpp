#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return a == b && sum == product;
}

auto [sum, product] = issame({10, 10});

assert(issame({10, 10}));