#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& a) {
    vector<float> even_indices;
    vector<float> sorted_even_indices;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(a[i]);
            sorted_even_indices.push_back(a[i]);
        }
    }

    sort(sorted_even_indices.begin(), sorted_even_indices.end());

    int sorted_even_index = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            a[i] = sorted_even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    vector<float> test_input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(test_input);
    assert(issame(test_input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}