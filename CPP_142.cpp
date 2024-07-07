#include <initializer_list>
#include <algorithm>
#include <cassert>

int sum_squares(const std::initializer_list<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0, [](int acc, int x){return acc + x * x;});
}

int main() {
    assert(sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10}) == -1448);
    return 0;
}