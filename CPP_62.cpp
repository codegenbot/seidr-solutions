#include <vector>
#include <cassert>

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

int main() {
    assert(issame(std::vector<float>{1}, std::vector<float>{}));
    
    std::vector<float> vec1 = {2.5, 3.7, 1.2};
    std::vector<float> vec2 = {2.5, 3.7, 1.2};
    assert(issame(vec1, vec2));
    
    return 0;
}