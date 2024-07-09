#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(tri(1), {1, 3}));
}