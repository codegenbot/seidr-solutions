vector<float> sort_even(vector<float> l) {
    vector<float> l_prime(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even_elements;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even_elements.push_back(l[j]);
                }
            }
            sort(even_elements.begin(), even_elements.end());
            l_prime[i] = even_elements[0];
        } else {
            l_prime[i] = l[i];
        }
    }
    return l_prime;
}