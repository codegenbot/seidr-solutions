vector<float> even_elements;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());

    vector<float> l_prime;
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_prime.push_back(even_elements[even_index++]);
        } else {
            l_prime.push_back(l[i]);
        }
    }

    return l_prime;
}