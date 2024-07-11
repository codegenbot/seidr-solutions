#include <stdio.h>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1 && i != 0) break;
        vector<pair<int, int>> coords;
        for (int j = lst[i].size() - 1; j >= 0; j--) {
            coords.push_back({i, j});
        }
        result.insert(result.end(), coords.begin(), coords.end());
    }
    return result;
}