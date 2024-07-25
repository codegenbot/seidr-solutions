#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}

std::vector<int> toVector(std::pair<int, int> pair) {
    return {pair.first, pair.second};
}

int main() {
    assert(issame(toVector(sum_product({10})), {10, 10}));
}