#include <vector>
#include <utility>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b){
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return std::make_pair(sum, prod);
}

int main() {
    assert(issame(sum_product({10}), std::make_pair(10, 10)));
    return 0;
}