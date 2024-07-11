vector<float> even_values;
    vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even_values.push_back(l[i]);
            even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    for (int i = 1; i < l.size(); i += 2) {
        even_values.push_back(sorted_even_values.back());
        sorted_even_values.pop_back();
    }
    return even_values;
}