#include <vector>
#include <utility>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers);
bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    assert(a.size() == 2 && b.size() == 2);
    return a[0] == b[0] && a[1] == b[1];
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