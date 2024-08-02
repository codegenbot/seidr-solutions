#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> generate_integers(int start, int end);

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}