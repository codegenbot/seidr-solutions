#include <vector>
#include <cassert>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return a == b;
}

std::vector<int> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<int> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    result = {-1, -1};
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    
    return 0;
}