#include <vector>

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
    // Test the get_row function
    vector<vector<int>> lst = {{1, 2, 3},
                               {4, 2, 6},
                               {7, 8, 9},
                               {1, 2, 2}};
    int x = 2;
    vector<vector<int>> result = get_row(lst, x);
    
    return 0;
}