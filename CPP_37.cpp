vector<float> sort_even(vector<float> l) {
    vector<float> even_elems;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        }
    }
    sort(even_elems.begin(), even_elems.end());
    
    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_elems[even_index++]);
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}