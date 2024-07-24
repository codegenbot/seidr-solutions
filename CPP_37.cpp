vector<float> even_indices;
    vector<float> result = l;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    int even_indices_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_indices[even_indices_index];
            even_indices_index++;
        }
    }

    return result;
}