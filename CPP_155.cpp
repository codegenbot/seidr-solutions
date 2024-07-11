#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_count(int num);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}