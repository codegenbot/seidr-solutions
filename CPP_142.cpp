#include <vector>
#include <numeric>

int sum_squares(const std::vector<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0, [](int acc, int x){return acc + x * x;});
}

int main() {
    std::vector<int> numbers({1, 2, 3});
    int sum = sum_squares(numbers);
    assert(sum == 14);
}