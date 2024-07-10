#include <vector>
#include <algorithm>
#include <functional>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame({1, 2, 3, -23, 243, -400, 0}, {}));