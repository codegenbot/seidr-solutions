vector<float> even_values;
    vector<int> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            even_indices.push_back(i);
        }
    }
    sort(even_values.begin(), even_values.end());
    
    vector<float> result = l;
    for (int i = 0; i < even_values.size(); i++) {
        result[even_indices[i]] = even_values[i];
    }
    
    return result;
}