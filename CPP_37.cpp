bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l) {
    vector<float> even_elements;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    
    sort(even_elements.begin(), even_elements.end());
    
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_elements[even_index++];
        }
    }
}

vector<float> arrange(vector<float> l) {
    vector<float> even_elements;
    vector<float> result;

    sort_even(l);

    return l;
}