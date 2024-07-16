#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
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

void sort_third(std::vector<int>& l) {
    std::vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    std::sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b) {
        return l[a] < l[b];
    });

    for (int i = 0; i < sorted_indices.size(); ++i) {
        l[sorted_indices[i]] = l[i];
    }
}

int main() {
    // Main function implementation (if needed)
    return 0;
}