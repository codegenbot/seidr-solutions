#include <vector>
#include <cassert>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> generateVector(int n) {
    return std::vector<int>(n, 0);
}

int main() {
    int n = 2;
    std::vector<int> result = generateVector(n);
    assert(issame(result, {0, 0}));
    return 0;
}