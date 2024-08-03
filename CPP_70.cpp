#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

void strange_sort_list(std::vector<int>& list) {
    // Implement sorting logic here
}

int main() {
    std::vector<int> vec = {111111};
    strange_sort_list(vec);
    assert(issame(vec, std::vector<int>{111111}));
    return 0;
}