#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

void intersperse(std::vector<int> &a, const std::vector<int> &b, int pos) {
    a.insert(a.begin() + pos, b.begin(), b.end());
}