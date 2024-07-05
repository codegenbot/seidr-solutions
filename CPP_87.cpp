#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(const vector<vector<int>>& lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (find(lst[i].begin(), lst[i].end(), x) != lst[i].end()) {
            result.push_back(lst[i]);
        }
    }
    return result;
}

int main() {
    assert(get_row({{}, {1}, {1, 2, 3}}, 3) == vector<vector<int>>{{1, 2, 3}});
    return 0;
}