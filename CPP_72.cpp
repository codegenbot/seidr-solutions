```cpp
#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) str += std::to_string(i);
    if (str != std::string(rbegin(str), rend(str))) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

assert(will_it_fly({5}, 5) == true);
assert(will_it_fly({1,2,3}, 10) == true);
assert(will_it_fly({4,5,6}, 7) == false);