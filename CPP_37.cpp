vector<float> even_elements;
    vector<float> result;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    
    sort(even_elements.begin(), even_elements.end());
    
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