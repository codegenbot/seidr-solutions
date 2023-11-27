#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    // implementation
}

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime = l;
    vector<float> even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_indices[i / 2];
        }
    }

    return l_prime;
}