#include <vector>
#include <algorithm>

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(areEqual(eat(4, 5, 1), eat(4, 5, 1)));
}