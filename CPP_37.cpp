vector<float> even_indices;
    vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}