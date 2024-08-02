#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

void generate_integers(std::vector<int>& vec, int n) {
    for (int i = 1; i <= n; ++i) {
        vec.push_back(i);
    }
}