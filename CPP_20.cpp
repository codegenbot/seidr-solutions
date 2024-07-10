#include <vector>
#include <algorithm>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i) {
        if(std::abs(a[i] - b[i]) > 0.0001) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(areSame({1.1, 2.2, 3.1, 4.1, 5.1}, {2.2, 3.1}));
}