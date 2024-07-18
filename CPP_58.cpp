#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    return {}; // Placeholder return
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {})); // Modify how issame is called
    return 0;
}