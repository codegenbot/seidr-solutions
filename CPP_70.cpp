#include <vector>
#include <cassert>
#include <algorithm> // Include this for sort function

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

std::vector<int> strange_sort_list(const std::vector<int>& input) {
    std::vector<int> sorted = input;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

int main() {
    assert(issame(strange_sort_list(std::vector<int>{111111}), std::vector<int>{111111}));
    return 0;
}