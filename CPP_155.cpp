#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    int n = a.size();
    if (n != b.size()) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}