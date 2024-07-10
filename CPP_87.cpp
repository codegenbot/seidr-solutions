#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    if (a.size() != b.size()) return false;
    for (unsigned i = 0; i < a.size(); ++i) {
        if (a[i].size() != b[i].size()) return false;
        for (unsigned j = 0; j < a[i].size(); ++j) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}