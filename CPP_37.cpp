vector<float> sorted_even = l;
    vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even[i] = even_values[j];
            j++;
        }
    }

    return sorted_even;
}