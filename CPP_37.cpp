#include <vector>
#include <algorithm>

vector<float> sort_even(const vector<float>& l) {
    vector<float> even_indices;
    vector<float> result(l.size());

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_indices[even_index];
            even_index++;
        }
    }

    return result;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    return 0;
}