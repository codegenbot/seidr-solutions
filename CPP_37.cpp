vector<float> even_elements;
    vector<float> sorted_even_elements;
    vector<float> result;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
            sorted_even_elements.push_back(l[i]);
        }
    }
    
    sort(sorted_even_elements.begin(), sorted_even_elements.end());
    
    int even_index = 0, sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_elements[even_index++]);
        } else {
            result.push_back(sorted_even_elements[sorted_even_index++]);
        }
    }
    
    return result;
}