#include <vector>
#include <algorithm>

void sort_even(std::vector<float>& l);

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void sort_even(std::vector<float>& l) {
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) continue;
        l[i] = l[i - 1];
    }
    std::sort(l.begin(), l.end());
}