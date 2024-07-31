#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(odd_count({"271", "137", "314"}), {2, 3, 2}));
}