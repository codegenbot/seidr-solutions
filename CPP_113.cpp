#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(is_same(odd_count({"271", "137", "314"}), {2, 3, 2}));
}