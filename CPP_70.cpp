#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int first = *lst.begin();
        int last = *(--lst.end());
        result.push_back(first);
        result.push_back(last);
        lst.erase(std::remove(lst.begin(), lst.end(), first), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), last), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({1, 2, 3}), {3, 2, 1}));
}