```
#include <vector>
#include <algorithm>

bool operator==(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> unique(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    std::vector<int> result(std::unique(first, last), last);
    return result;
}

int main() {
    assert(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) == std::vector<int>({0, 2, 3, 5, 9, 123}));
    return 0;
}