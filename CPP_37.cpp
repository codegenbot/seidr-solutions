#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    // Code for comparing if a and b are same
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        }
    }
    sort(result.begin(), result.end());
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = result[j++];
        }
    }
    return l;
}

int main() {
    // Test the code
    vector<float> input = {4.2, 2.5, 6.1, 3.8, 1.9};
    vector<float> expected_output = {1.9, 2.5, 6.1, 3.8, 4.2};

    vector<float> sorted_even = sort_even(input);

    assert(issame(sorted_even, expected_output));

    return 0;
}