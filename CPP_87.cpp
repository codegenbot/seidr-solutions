#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main() {
    assert(is_same(get_row(std::vector<std::vector<int>>{{}, {1}, {1, 2, 3}}, 3) , std::vector<std::vector<int>>{{2, 2}}));
    return 0;
}