#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end());
    for (auto &coord : result) {
        sort(coord.begin(), coord.end(), greater<int>());
    }
    return result;
}

int main(){
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
}