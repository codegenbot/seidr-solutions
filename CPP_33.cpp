#include <vector>
#include <algorithm>

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime = l;
    vector<int> indices;

    // Find indices divisible by three
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    // Sort values at indices divisible by three
    for (int i = 0; i < indices.size(); i++) {
        for (int j = i + 1; j < indices.size(); j++) {
            if (l_prime[indices[i]] > l_prime[indices[j]]) {
                swap(l_prime[indices[i]], l_prime[indices[j]]);
            }
        }
    }

    return l_prime;
}