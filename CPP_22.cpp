#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> filter_integers(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int i : vec) {
        if (std::abs(i) > 0.01) { 
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    // Testing your function
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}