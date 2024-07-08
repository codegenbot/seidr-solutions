#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(const vector<float>& a) {
    vector<pair<float, int>> even_indices;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(make_pair(a[i], i));
        }
    }

    sort(even_indices.begin(), even_indices.end());

    vector<float> sorted_a = a;

    for (int i = 0; i < even_indices.size(); i++) {
        sorted_a[even_indices[i].second] = even_indices[i].first;
    }

    return sorted_a;
}

int main() {
    vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> sorted_input = sort_even(input);
    assert(issame(sorted_input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}