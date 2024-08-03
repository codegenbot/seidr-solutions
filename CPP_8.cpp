#include <vector>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return (a.first == b.first) && (a.second == b.second);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{10}, std::vector<int>{10, 10}));
    
    return 0;
}