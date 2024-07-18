#include <algorithm>
#include <vector>
#include <set>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>({4, 3, 2, 8}), std::vector<int>{}));
}