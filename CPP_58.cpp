#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result == a && result == b;
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}) , {}));
    // additional test cases here
    return 0;
}