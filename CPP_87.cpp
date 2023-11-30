#include <vector>
#include <algorithm>

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                vector<int> coordinate = {i, j};
                result.push_back(coordinate);
            }
        }
    }
    sort(result.begin(), result.end(), [](vector<int> a, vector<int> b) {
        return a[0] < b[0];
    });
    for (int i = 0; i < result.size(); i++) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    // Add more test cases here if needed
    return 0;
}