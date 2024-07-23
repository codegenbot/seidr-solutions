vector<float> even_values;
    vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[j];
            j++;
        }
    }
    return l;
}