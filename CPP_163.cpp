#include <vector>
#include <cassert>

std::vector<int> generate_integers(int low, int high) {
    std::vector<int> result;
    for (int i = low; i <= high; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}