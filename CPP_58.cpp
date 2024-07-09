#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result == a;
}

int main() {
    assert(issame({}, {}));
    assert(issame({1, 2, 3, 4}, {4, 3, 2, 1}));
    assert(issame({5, 2, 7}, {2, 5, 7}));
    return 0;
}