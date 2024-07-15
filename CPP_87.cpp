#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_row(std::vector<std::vector<int>> lst, int x) {
    return lst[x];
}