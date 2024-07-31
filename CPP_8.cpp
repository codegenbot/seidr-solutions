#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

auto [sum, product] = sum_product({10});

assert(issame({10, 10}));