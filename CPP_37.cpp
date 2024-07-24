vector<float> even_values;
    vector<float> sorted_even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even_values.push_back(even_values[even_index]);
            even_index++;
        } else {
            sorted_even_values.push_back(l[i]);
        }
    }

    return sorted_even_values;
}