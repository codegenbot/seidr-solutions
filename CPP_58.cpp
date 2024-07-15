#include <vector>
#include <cassert>

namespace CustomVectorFunctions {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> common(std::vector<int> a, std::vector<int> b) {
        std::vector<int> result;
        // Logic to find common elements between a and b
        return result;
    }
}

int main() {
    assert(CustomVectorFunctions::issame(CustomVectorFunctions::common({4, 3, 2, 8}, {}), {}));
    return 0;
}