vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());
    
    vector<float> result;
    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}