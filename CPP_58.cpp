#include <vector>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    // Your logic to find common elements between 'a' and 'b'
    return result;
}

int main() {
    assert(std::issame(std::common({4, 3, 2, 8}, {}), {}));
    return 0;
}