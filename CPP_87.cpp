#include <vector>

bool isSame(vector<vector<int>> a, vector<vector<int>> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({lst[i][j], i, j});
            }
        }
    }
    return result;
}