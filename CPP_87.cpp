#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<pair<int,int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(),
         [](const pair<int,int>& a, const pair<int,int>& b) {
             if (a.first != b.first) return a.first < b.first;
             else return a.second > b.second;
         });
    return vector<vector<int>>(result.begin(), result.end());
}