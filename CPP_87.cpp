#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0) {
            vector<pair<int, int>> temp;
            for (int j = 0; j < lst[i].size(); j++) {
                temp.push_back({i, j});
            }
            sort(temp.begin(), temp.end(),
                 [](pair<int, int> a, pair<int, int> b) {
                     if (a.first == b.first)
                         return a.second > b.second;
                     return a.first < b.first;
                 });
            for (auto &p : temp) {
                result.push_back({p.first, p.second});
            }
        }
    }
    return result;
}