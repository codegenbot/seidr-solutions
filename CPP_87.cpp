#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<vector<int>> a, vector<vector<int>> b);

vector<vector<int>> get_row(vector<vector<int>> lst, int x);

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}