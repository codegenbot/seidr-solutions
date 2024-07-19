#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    issame(tri(1), {1, 3});
    return 0;
}