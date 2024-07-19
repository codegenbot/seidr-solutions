#include <algorithm>
#include <numeric>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}).at(0).first, find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}).at(0).second}, {{2.2f, 3.1f}}));
}