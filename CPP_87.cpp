#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(const vector<vector<int>> &lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = lst[i].size() - 1; j >= 0; --j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

bool issame(const vector<vector<int>> &a, const vector<vector<int>> &b) {
    return a == b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    assert(issame(get_row({{1, 3}, {3, 4}, {3, 2, 3}}, 3), {{0, 1}, {1, 0}, {2, 0}, {2, 2}}));
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 1), {{1, 0}, {2, 0}}));
    cout << "All tests passed!" << endl;
    return 0;
}