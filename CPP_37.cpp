vector<float> even_elems;
    vector<float> sorted_even_elems;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        }
    }

    sort(even_elems.begin(), even_elems.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even_elems.push_back(even_elems[even_index++]);
        } else {
            sorted_even_elems.push_back(l[i]);
        }
    }

    return sorted_even_elems;
}