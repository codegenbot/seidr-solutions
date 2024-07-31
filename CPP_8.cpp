#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    auto [sum, product] = sum_product({10});
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

assert(issame({10, 10}));