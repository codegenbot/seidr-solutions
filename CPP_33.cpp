#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(l[i]);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end());

    int sorted_idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = sorted_indices[sorted_idx++];
        }
    }

    return l;
}

int main() {
    vector<int> l = {9, 6, 1, 4, 8, 5, 7, 2, 3, 0};
    vector<int> expected_output = {0, 6, 1, 2, 8, 5, 3, 4, 9, 7};

    vector<int> result = sort_third(l);

    assert(issame(result, expected_output));
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    return 0;
}