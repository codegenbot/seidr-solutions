#include <vector>
#include <assert.h>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (std::find(b.begin(), b.end(), num) != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}