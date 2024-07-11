#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int maximum(std::vector<int> v, int n) {
    std::sort(v.begin(), v.end(), std::greater<int>());
    v.resize(n);
    return v;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
}