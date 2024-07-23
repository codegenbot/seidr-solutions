#include <vector>

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    if (x < 1 || x > lst.size()) {
        vector<vector<int>> result;
        result.push_back({-1, "Invalid row number."});
        return result;
    }
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (x == i + 1) {
            for (int j = lst[i].size() - 1; j >= 0; --j) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}