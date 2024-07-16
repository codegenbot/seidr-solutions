vector<float> even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    sort(even_values.begin(), even_values.end());

    vector<float> l_prime;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime.push_back(even_values[even_index]);
            even_index++;
        } else {
            l_prime.push_back(l[i]);
        }
    }

    return l_prime;
}