#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
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

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

int main() {
    vector<vector<int>> lst = {{}, {1}, {1, 2, 3}};
    vector<vector<int>> expected = {{2, 2}};
    vector<vector<int>> result = get_row(lst, 3);
    assert(issame(result, expected));
    return 0;
}