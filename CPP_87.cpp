#include <stdio.h>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == i + 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}