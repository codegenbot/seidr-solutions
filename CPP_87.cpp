#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_row(std::vector<std::vector<int>> lst, int x) {
    return lst[x];
}

int main() {
    assert (issame(get_row({{}, {1}, {1, 2, 3}}, 2) , {1, 2, 3}));
    return 0;
}