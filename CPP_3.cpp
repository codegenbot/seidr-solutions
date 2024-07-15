#include <vector>
#include <cassert>

bool below_zero(const std::vector<int>& operations);

int main() {
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    return 0;
}