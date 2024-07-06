#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<pair<int, pair<int, int>>> res;
    for(int i = 0; i < lst.size(); i++) {
        for(int j = 0; j < lst[i].size(); j++) {
            if(lst[i][j] == x) {
                res.push_back({i, {j, 1}});
            }
        }
    }
    sort(res.begin(), res.end());
    vector<vector<int>> result;
    for(auto p : res) {
        result.push_back({p.second.first, p.first});
    }
    return result;
}