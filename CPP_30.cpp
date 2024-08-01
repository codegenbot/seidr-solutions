#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    std::vector<float> get_positive(const std::vector<float>& v) {
        std::vector<float> result;
        for (const auto& val : v) {
            if (val > 0) {
                result.push_back(val);
            }
        }
        return result;
    }
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::get_positive({}), {}));
    return 0;
}