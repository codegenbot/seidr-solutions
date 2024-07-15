#include <vector>
#include <algorithm>
#include <cassert>

class CustomVectorFunctions {
public:
    static std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
        std::vector<int> result;
        for (int num : a) {
            if (std::find(b.begin(), b.end(), num) != b.end()) {
                result.push_back(num);
            }
        }
        return result;
    }

    static bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
};

int main() {
    assert(CustomVectorFunctions::issame(CustomVectorFunctions::common({4, 3, 2, 8},{}),{}));
    return 0;
}