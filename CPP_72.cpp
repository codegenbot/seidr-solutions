```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

bool will_it_fly(std::vector<int> q, int w) {
    bool balanced = true;
    int sum = 0, depth = 0;
    for (int i : q) {
        if (i > w - sum)
            return false;
        sum += i;
        if (depth < 0) {
            if (depth++ < 0) {
                return false;
            }
        } else if (--depth == 0)
            balanced = true;
    }
    return sum <= w && balanced;
}

assert(will_it_fly({5}, 5));