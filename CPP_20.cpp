#include <algorithm>
#include <vector>

bool isSame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(isSame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
}