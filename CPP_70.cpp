#include <vector>
#include <algorithm>
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

bool strange_sort_list(const std::vector<int>& list) {
    std::vector<int> sorted_list = list; // Copy the list for sorting (if needed)

    // Sorting logic (Example: Sort in descending order)
    std::sort(sorted_list.rbegin(), sorted_list.rend());

    return issame(list, sorted_list);
}

int main() {
    assert(issame(std::vector<int>{111111}, std::vector<int>{111111}));
    assert(issame(strange_sort_list({111111}), {111111}));

    return 0;
}