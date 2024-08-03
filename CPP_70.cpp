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

std::vector<int> strange_sort_list(std::vector<int> list) {
    // Implement your sorting logic here
    return list;
}

int main() {
    assert(issame(strange_sort_list(std::vector<int>{111111}), std::vector<int>{111111}));
    return 0;
}