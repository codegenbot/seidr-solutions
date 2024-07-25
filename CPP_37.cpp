vector<float> even_elements;
    for (int i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    sort(even_elements.begin(), even_elements.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        } else {
            result.push_back(even_elements[even_index]);
            even_index++;
        }
    }

    return result;
}