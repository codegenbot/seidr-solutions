bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

void sort_even(vector<float>& l) {
    vector<float> even_indices;
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        } else {
            result.push_back(even_indices[even_index]);
            even_index++;
        }
    }

    l = result;
}