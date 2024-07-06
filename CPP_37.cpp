#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even_indices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0)
                    even_indices.push_back(l[j]);
            }
            sort(even_indices.begin(), even_indices.end());
            l_prime[i] = even_indices[0];
        } else {
            l_prime[i] = l[i];
        }
    }
    return l_prime;
}