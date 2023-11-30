vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    vector<float> even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 != 0) {
            l_prime[i] = l[i];
        } else {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_indices[j++];
        }
    }

    return l_prime;
}