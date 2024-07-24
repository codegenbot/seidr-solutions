vector<float> even_elements;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }

    sort(even_elements.begin(), even_elements.end());

    size_t even_index = 0;
    vector<float> res;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            res.push_back(even_elements[even_index]);
            even_index++;
        } else {
            res.push_back(l[i]);
        }
    }

    return res;
}