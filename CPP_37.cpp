vector<float> l_prime = l;
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_elements[j++];
        }
    }
    return l_prime;
}