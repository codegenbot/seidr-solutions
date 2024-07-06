#include<vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<pair<int, pair<int, int>>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (!lst[i].empty()) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (lst[i][j] == x) {
                    result.push_back({i, {j, i}});
                }
            }
        }
    }
    sort(result.begin(), result.end());
    vector<vector<int>> output;
    for (auto& pair : result) {
        output.push_back({pair.second.first, pair.second.second});
    }
    return output;
}