#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    assert (std::abs(std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 12.0) < 1e-4);
}