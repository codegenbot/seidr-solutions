#include <vector>
#include <cmath>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even_indices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even_indices.push_back(l[j]);
                }
            }
            sort(even_indices.begin(), even_indices.end());
            result[i] = even_indices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}