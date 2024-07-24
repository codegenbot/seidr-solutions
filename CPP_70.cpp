#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}