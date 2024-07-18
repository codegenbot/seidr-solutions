#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> sort_third(vector<int> l);

int main() {
    vector<int> input = {5, 2, 9, 3, 7, 6, 1, 4, 8};
    vector<int> expected_output = {1, 2, 9, 4, 7, 6, 5, 3, 8};
    vector<int> output = sort_third(input);
    assert(issame(output, expected_output));
}

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