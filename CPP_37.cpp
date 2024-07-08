#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& a) {
    vector<pair<float, int>> even_indices;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(make_pair(a[i], i));
        }
    }

    sort(even_indices.begin(), even_indices.end());

    for (int i = 0; i < even_indices.size(); i++) {
        a[even_indices[i].second] = even_indices[i].first;
    }
}

int main() {
    vector<float> input;
    input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);
    assert(issame(input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}