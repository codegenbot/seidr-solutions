#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_same(const vector<vector<int>>& a, const vector<vector<int>>& b){
    return a == b;
}

vector<vector<int>> get_row(const vector<vector<int>>& lst, int x){
    vector<vector<int>> result;
    for (size_t i = 0; i < lst.size(); ++i) {
        for (size_t j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({static_cast<int>(i), static_cast<int>(j)});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    return result;
}

int main(){
    vector<vector<int>> result = get_row({{}, {1}, {1, 2, 3}}, 3);
    vector<vector<int>> expected = {{2, 2}};
    assert(is_same(result, expected));
    return 0;
}