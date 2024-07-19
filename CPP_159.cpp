#include <utility>
#include <cassert>
#include <vector>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame({4 + 5, 4 - 1}, std::make_pair(5, 3)));
    return 0;
}