#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i].size() > 0) {
            for (int j = lst[i].size() - 1; j >= 0; --j) {
                if (j == x) {
                    result.push_back({i, j});
                }
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}