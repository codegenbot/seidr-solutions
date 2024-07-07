```cpp
#include <initializer_list>

int sum_squares(initializer_list<int> v) {
    return std::accumulate(v.begin(), v.end(), 0, [](int acc, int x){return acc + x * x;});
}