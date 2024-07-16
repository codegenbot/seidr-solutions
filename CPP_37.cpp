vector<float> sorted_even;
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even.push_back(even_elements[even_index]);
            even_index++;
        } else {
            sorted_even.push_back(l[i]);
        }
    }
    return sorted_even;
}