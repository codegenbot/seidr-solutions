#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

auto sum_product = sumProduct({10});

assert(issame(sumProduct({10}), {10, 10}));