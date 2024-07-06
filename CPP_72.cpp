```
#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) str += std::to_string(i);
    if (str != std::string(str.rbegin(), str.rend())) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // will_it_fly({1,2,3},{10}) ?= true
    // will_it_fly({4,2,6},{15}) ?= false
    return 0;
}