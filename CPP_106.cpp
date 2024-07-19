#include <vector>
#include <cassert>

bool issame_vector(const std::vector<int>& a, const std::vector<int>& b) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame_vector({1, 2, 3}, {1, 2, 6}) == false);
    return 0;
}