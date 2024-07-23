vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }

    sort(sorted_indices.begin(), sorted_indices.end(), [&l](int i, int j) {
        return l[i] < l[j];
    });

    vector<int> l_prime = l;
    for (int i = 0; i < sorted_indices.size(); ++i) {
        l_prime[sorted_indices[i]] = l[sorted_indices[i]];
    }

    return l_prime;
}