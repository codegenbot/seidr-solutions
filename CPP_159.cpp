#include <utility>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    return 0;
}