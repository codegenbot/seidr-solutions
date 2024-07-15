#include <vector>
#include <cassert>

namespace std {

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

}

std::vector<int> f(int size) {
    std::vector<int> result(size);
    for (int i = 0; i < size; ++i) {
        result[i] = i + 1;
    }
    return result;
}

int main() {
    assert(std::issame(f(3), {1, 2, 3}));
}