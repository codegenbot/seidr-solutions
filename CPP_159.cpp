#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // assert statement should have appropriate comparison logic
    assert(issame({4, 5, 1}, {5, 0}));
    
    return 0;
}