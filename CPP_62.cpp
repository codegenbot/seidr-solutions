#include <vector>
#include <cassert>

namespace contest {
    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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
}

int main() {
    assert(contest::issame(std::vector<float>{1}, std::vector<float>{}));
    return 0;
}