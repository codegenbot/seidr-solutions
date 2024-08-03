#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}).first, 10));
    assert(issame(sum_product({10}).second, 10));
}