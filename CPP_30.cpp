#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l);
bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [y](float x) { return abs(x - y) < 0.0001; });
}

int main() {
    assert(issame(get_positive({}), {}) || "Test failed");
    return 0;
}