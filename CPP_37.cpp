vector<float> odd_indices;
    vector<float> even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        } else {
            odd_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    int odd_idx = 0;
    int even_idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_idx]);
            even_idx++;
        } else {
            result.push_back(odd_indices[odd_idx]);
            odd_idx++;
        }
    }

    return result;
}