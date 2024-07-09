#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 0; ; i++) {
        if ((i + 1) % 2 == 0) {
            if (n % 2 != 0) break;
            result.push_back(n);
            n++;
        } else {
            if (n % 2 == 0) break;
            result.push_back(n);
            n++;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}