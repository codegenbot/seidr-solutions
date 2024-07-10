#include <vector>
#include <algorithm>

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(areEqual(eat(4, 5, 1), eat(4, 5, 1)));
}