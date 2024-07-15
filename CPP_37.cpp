sort_even(vector<float> l){
    vector<float> l_sorted = l;
    vector<float> even_values;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    size_t j = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_sorted[i] = even_values[j++];
        }
    }
    
    return l_sorted;
}