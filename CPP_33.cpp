#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> sort_third(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    vector<int> sorted_values;
    for (int idx : indices) {
        sorted_values.push_back(l[idx]);
    }
    sort(sorted_values.begin(), sorted_values.end());
    for (int i = 0; i < indices.size(); ++i) {
        l[indices[i]] = sorted_values[i];
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}