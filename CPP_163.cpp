#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> generate_integers(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = i;
    }
    return result;
}