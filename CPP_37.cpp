vector<float> even_index_values;
    vector<float> sorted_even_index_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_index_values.push_back(l[i]);
            sorted_even_index_values.push_back(l[i]);
        }
    }

    sort(sorted_even_index_values.begin(), sorted_even_index_values.end());

    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_index_values[sorted_even_index];
            sorted_even_index++;
        }
    }

    return l;
}