#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > x) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (j == x) {
                    result.push_back({i, j});
                }
            }
        }
    }
    
    sort(result.begin(), result.end(), [](auto &a, auto &b) {
        if (a[0] == b[0]) return a[1] > b[1];
        return a[0] < b[0];
    });
    
    return result;
}