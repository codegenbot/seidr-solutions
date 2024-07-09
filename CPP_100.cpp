#include <vector>
#include <algorithm>

bool issame(std::vector a, std::vector b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector a(std::vector<int> n) {
    std::vector a;
    for (int i = 2 * n; i > 0; --i) {
        a.push_back(i);
    }
    return a;
}

int main() {
    assert(issame(a(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}