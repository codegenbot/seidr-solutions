#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sum_product(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : b) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}, {0}), {10, 0}));
    return 0;
}