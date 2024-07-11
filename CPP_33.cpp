#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::vector<int>(a) == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    std::vector<int> temp;
    for (int idx : indices) {
        temp.push_back(l[idx]);
    }

    std::sort(temp.begin(), temp.end());

    for (int i = 0; i < indices.size(); ++i) {
        l[indices[i]] = temp[i];
    }

    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}