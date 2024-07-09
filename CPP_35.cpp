#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    auto max = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return 0;
}