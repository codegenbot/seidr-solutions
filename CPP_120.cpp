#include <vector>
#include <algorithm>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(std::issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}