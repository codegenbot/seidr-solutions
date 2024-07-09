#include <vector>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a != b;
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == true);
    return 0;
}