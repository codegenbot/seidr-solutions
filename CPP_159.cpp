#include <vector>
#include <utility>
#include <cassert>

std::pair<int, int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a == b) {
        return {1, 0};
    } else {
        return {0, 1};
    }
}

int main() {
    assert(issame({4, 5}, {4, 5}) == std::make_pair(1, 0));
}