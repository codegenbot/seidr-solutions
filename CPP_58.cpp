#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result.empty();
}

int main() {
    assert(issame({}, {}));
    assert(issame({1, 2, 3}, {3, 2, 1}));
    assert(!issame({4, 5}, {5, 6, 7}));
    
    return 0;
}