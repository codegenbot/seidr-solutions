#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end());
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};

    if (!is_sorted(lst)) {
        return false;
    }

    return 0;
}