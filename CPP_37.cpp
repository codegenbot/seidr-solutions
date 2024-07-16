bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_values[j];
            j++;
        }
    }
}

vector<float> solve(vector<float> l) {
    vector<float> result;
    
    sort_even(l);
    
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i]);
    }
    
    return result;
}