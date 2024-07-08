#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() == 0 && b.size() == 0) {
        return true;
    }
    if(a.size() == 0 || b.size() == 0) {
        return false;
    }
    
    bool result = std::equal(a.begin(), a.end(), b.begin());
    
    return result;
}

int main() {
    assert(issame({2, 2, 2}, {2, 2, 2, 2, 2}));
}