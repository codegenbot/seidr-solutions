#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}