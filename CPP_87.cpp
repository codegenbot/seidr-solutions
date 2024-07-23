#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (!lst[i].empty()) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (j == x - 1) {
                    result.push_back({i, j});
                }
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}