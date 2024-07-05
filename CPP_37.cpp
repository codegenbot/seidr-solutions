#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_indices[i / 2];
    }
    return l;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    assert(issame(result, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    cout << "Test passed!" << endl;
    return 0;
}