#include <vector>
#include <utility>
#include <cassert>

bool std::vector<int>::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(std::vector<int>::issame({10, 10}, sum_product({10})));
    return 0;
}