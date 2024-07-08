```cpp
#include <vector>

std::vector<std::vector<int>> get_row(int n) {
    std::vector<std::vector<int>> row;
    for (int i = 0; i < n; i++) {
        std::vector<int> temp;
        int j = i + 1;
        while(j <= i+n) {
            temp.push_back(j);
            j++;
        }
        row.push_back(temp);
    }
    return row;
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
    assert(issame(get_row({ }), {{}}));
    assert(issame(get_row({1}), {{1}}));
    assert(issame(get_row({1, 2, 3}), {{1}, {2}, {3}}));
    return 0;
}