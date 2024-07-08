#include <vector>

std::vector<std::vector<int>> get_row(int n) {
    std::vector<std::vector<int>> result;
    
    for (int i = 1; i <= n; i++) {
        std::vector<int> row;
        for (int j = 1; j <= i; j++) {
            row.push_back(j);
        }
        result.push_back(row);
    }
    
    return result;
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) return false;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_row({3}), {{1}, {1, 2}, {1, 2, 3}}));
    return 0;
}