#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (lst[i][j] == x) {
                    vector<int> coord;
                    coord.push_back(i);
                    coord.push_back(j);
                    result.push_back(coord);
                }
            }
        }
    }
    sort(result.begin(), result.end(),
         [](const vector<int>& a, const vector<int>& b) {
             if (a[0] == b[0]) return a[1] > b[1];
             else return a[0] < b[0];
         });
    return result;
}