#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> integers;
    for (int i = start; i <= end; ++i) {
        integers.push_back(i);
    }
    return integers;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}