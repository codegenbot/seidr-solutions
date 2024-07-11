vector<float> even_vals;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }
    sort(even_vals.begin(), even_vals.end());
    
    vector<float> result;
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_vals[j]);
            j++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}