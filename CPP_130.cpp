#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> yourFunctionName(int n) {
    return std::vector<int>(n, 0);
}