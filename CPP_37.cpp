vector<float> sort_even(vector<float> l){
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_indices[i / 2];
    }
    return l;
}