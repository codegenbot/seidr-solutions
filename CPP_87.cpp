#include <vector>
#include <algorithm>
#include <cassert>

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    return result;
}

bool is_same(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main() {
    assert(is_same(get_row(std::vector<std::vector<int>>{{}, {1}, {1, 2, 3}}, 3), std::vector<std::vector<int>>{{2, 2}}));
    return 0;
}