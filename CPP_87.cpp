#include <vector>

int main() {
    std::vector<std::vector<int>> lst;
    int x;
    std::cin >> x;
    get_row(lst, x);
    return 0;
}

bool issame(const std::vector<std::vector<int>>& v1, const std::vector<std::vector<int>>& v2) {
    return std::equal(v1.begin(), v1.end(), v2.begin());
}