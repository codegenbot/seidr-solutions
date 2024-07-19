vector<float> l_prime = l;
    vector<float> even_vals;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }

    sort(even_vals.begin(), even_vals.end());

    size_t even_index = 0;
    for (size_t i = 0; i < l_prime.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_vals[even_index];
            even_index++;
        }
    }

    return l_prime;
}