#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}