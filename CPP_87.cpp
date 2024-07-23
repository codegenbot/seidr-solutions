#include <vector>

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (x == i + 1) {
            for (int j = 0; j < lst[i].size(); ++j) {
                result.push_back({lst[i][j]});
            }
        }
    }
    return result;
}