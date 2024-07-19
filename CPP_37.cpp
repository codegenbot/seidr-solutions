bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& even_elements) {
    sort(even_elements.begin(), even_elements.end());
}

vector<float> rearrange_elements(vector<float> l) {
    vector<float> even_elements;
    vector<float> result;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    
    sort_even(even_elements);
    
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(even_elements[even_index++]);
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}