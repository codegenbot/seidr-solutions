vector<float> sort_even(vector<float> l){
    vector<float> even_indices_values;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices_values.push_back(l[i]);
    }
    sort(even_indices_values.begin(), even_indices_values.end());
    
    size_t j = 0;
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_indices_values[j++];
    }
    
    return l;
}