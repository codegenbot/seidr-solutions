#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

int main() {
    assert(std::issame(generate_integers(17, 89), std::vector<int>{}));
    return 0;
}