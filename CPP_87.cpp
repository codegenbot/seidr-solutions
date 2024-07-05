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

int main() {
    assert(get_row({{}, {1}, {1, 2, 3}}, 3) == vector<vector<int>>{{2, 2}});
    cout << "All tests passed!" << endl;
    return 0;
}