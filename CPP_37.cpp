vector<float> even_values;
    vector<size_t> even_indices;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            even_indices.push_back(i);
        }
    }

    sort(even_values.begin(), even_values.end());

    for (size_t i = 0; i < even_indices.size(); i++) {
        l[even_indices[i]] = even_values[i];
    }

    return l;
}