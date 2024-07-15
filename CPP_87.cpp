#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return a == b;
}

std::vector<int> get_row(std::vector<std::vector<int>> lst, int x) {
    return lst[x];
}