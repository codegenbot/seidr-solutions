#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> sum_product = {0, 1};
    for (int num : a) {
        sum_product[0] += num;
        sum_product[1] *= num;
    }
    return a == b;
}

int main() {
    std::vector<int> numbers = {2, 5};
    std::vector<int> sum_product = {0, 1};
    for (int num : numbers) {
        sum_product[0] += num;
        sum_product[1] *= num;
    }
    assert(issame(sum_product, {10, 10}));
    return 0;
}