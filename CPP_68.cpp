#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool pluck(const std::vector<int>& v, int n, const std::vector<int>& a) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == n && issame(v.subvec(i), a)) {
            return true;
        }
    }
    return false;
}

int main() {
    if (pluck({7,9},{7}, {7}) || pluck({1,2},{3})) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}