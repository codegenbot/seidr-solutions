#include <vector>
#include <algorithm>

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i][0] != b[i][0] || a[i][1] != b[i][1]) {
            return false;
        }
    }
    return true;
}

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
        return a[0] != b[0] ? a[0] < b[0] : a[1] > b[1];
    });
    
    return result;
}