vector<float> even_vals;
    vector<float> result = l;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }
    
    sort(even_vals.begin(), even_vals.end());
    
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_vals[even_index];
            even_index++;
        }
    }
    
    return result;
}