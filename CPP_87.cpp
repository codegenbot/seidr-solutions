#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (lst[i][j] == x) {
                    result.push_back({i, j});
                }
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        return make_tuple(a[0], -a[1]) < make_tuple(b[0], -b[1]);
    });
    return result;
}