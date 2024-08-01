#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    std::vector<int> sorted_values;
    for (int idx : indices) {
        sorted_values.push_back(l[idx]);
    }
    std::sort(sorted_values.begin(), sorted_values.end());
    for (size_t i = 0; i < indices.size(); ++i) {
        l[indices[i]] = sorted_values[i];
    }
    return l;
}

int main() {
    std::vector<int> result = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    assert(issame(result, std::vector<int>{2, 6, 3, 4, 8, 9, 5, 1}));
}