#include <vector>
#include <cassert>

bool are_vectors_equal(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x);
}

int main() {
    assert(are_vectors_equal(get_row({std::vector<int>{}, std::vector<int>{1}, std::vector<int>{1, 2, 3}}, 2), std::vector<int>{1, 2, 3}));
    return 0;
}