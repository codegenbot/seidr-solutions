bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even_indices;
            for (int j = i; j < l.size(); j += 2) {
                even_indices.push_back(l[j]);
            }
            sort(even_indices.begin(), even_indices.end());
            l_prime.push_back(even_indices[0]);
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;