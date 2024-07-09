#include <utility>
#include <cassert>

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return std::make_pair(sum, prod);
}

int main() {
    assert(sum_product({10}) == std::make_pair(10, 10));
}