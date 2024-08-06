#include <utility>
#include <vector>
#include <algorithm>

bool find_closest_elements(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == {2.2, 3.1});
    return 0;
}