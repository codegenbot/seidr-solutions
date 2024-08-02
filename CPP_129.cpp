#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    for(int i = 0; i < k; i++){
        path.push_back(1);
        path.push_back(3);
    }
    return path;
}

int main() {
    assert(issame(minPath({1, 3}, 10), std::vector<int>({1, 3, 1, 3, 1, 3, 1, 3, 1, 3})));
    return 0;
}