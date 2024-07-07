#include <initializer_list>
#include <algorithm>
#include <cassert>
#include <numeric>

int sum_squares(const std::initializer_list<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0, [](int acc, int x){return acc + x * x;});
}