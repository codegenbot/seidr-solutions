#include <vector>
#include <unordered_set>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    std::unordered_set<T> setA(a.begin(), a.end());
    std::unordered_set<T> setB(b.begin(), b.end());
    return setA == setB;
}

int main() {
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{0, 2, 3, 5, 9, 123}));
    
    return 0;
}