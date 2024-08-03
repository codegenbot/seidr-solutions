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

// Declare the function here if needed
void strange_sort_list(std::vector<int>& list);

int main() {
    assert(issame(std::vector<int>{111111}, std::vector<int>{111111}));
    return 0;
}