#include <iostream>
#include <vector>
#include <algorithm>

vector<vector<int>> get_row(vector<vector<int>> lst, int x);

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    for (int i = 0; i < result.size(); i++) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> lst(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> lst[i][j];
        }
    }
    vector<vector<int>> ans = get_row(lst, x);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}