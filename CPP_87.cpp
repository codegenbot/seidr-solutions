```cpp
#include <vector>

bool issame(vector<vector<int>> v1, vector<vector<int>> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].size() != v2[i].size())
            return false;
        for (int j = 0; j < v1[i].size(); j++) {
            if (v1[i][j] != v2[i][j])
                return false;
        }
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> lst = {{}, {1}, {1, 2, 3}};
    assert(issame(get_row(lst, 3), {{0, 2}}));
    return 0;
}