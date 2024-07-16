#include <vector>
#include <algorithm>
#include <cassert>

int main() {
    auto issame = [](vector<vector<int>> a, vector<vector<int>> b) {
        return a == b;
    };

    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));

    return 0;
}