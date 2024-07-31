#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> tri(int n);

int main() {
    assert(issame(tri(1), {1, 3}));

    // Additional code
}