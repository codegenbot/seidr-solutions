#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int maximum(std::vector<int> v, int n) {
    std::sort(v.begin(), v.end(), std::greater<int>());
    return std::vector<int>(v.begin(), v.begin() + n);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
}