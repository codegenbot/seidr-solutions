#include <vector>
#include <algorithm>
#include <cassert>

int main() {
    auto issame = [](std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
        return a == b;
    };
    
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    
    return 0;
}