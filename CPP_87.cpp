#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

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
    for (auto& coord : result) {
        sort(coord.begin(), coord.end(), greater<int>());
    }
    return result;
}

int main(){
    assert(get_row({{}, {1}, {1, 2, 3}}, 3) == vector<vector<int>{{2, 2}});
    
    return 0;
}