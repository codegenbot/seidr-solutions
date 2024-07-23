vector<float> even_elements;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    sort(even_elements.begin(), even_elements.end());
    
    size_t even_index = 0;
    vector<float> result;
    for (size_t i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        } else {
            result.push_back(even_elements[even_index++]);
        }
    }
    
    return result;
}