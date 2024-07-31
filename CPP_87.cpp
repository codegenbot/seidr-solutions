#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3) , {{2, 2}}));
    return 0;
}