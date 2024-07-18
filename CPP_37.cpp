#include <vector>
#include <algorithm>

vector<int> sort_even(vector<int> l);

vector<int> sort_even(vector<int> l) {
    vector<int> even_indices;
    vector<int> sorted_even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }

    sort(sorted_even_indices.begin(), sorted_even_indices.end());
    int sorted_even_index = 0;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}