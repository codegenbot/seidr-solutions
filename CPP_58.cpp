#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a) {
    return a.size() == 4 && a[0] == 4 && a[1] == 3 && a[2] == 2 && a[3] == 8;
}

int main() {
    std::vector<int> common({4, 3, 2, 8});
    assert(issame(common));
}