#include <vector>

bool checkIfSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert(checkIfSame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    
    return 0;
}