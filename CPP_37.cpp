vector<float> even_values;
    vector<float> l_sorted = l;
    for (int i = 0; i < l_sorted.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l_sorted[i]);
        }
    }
    sort(even_values.begin(), even_values.end());
    int j = 0;
    for (int i = 0; i < l_sorted.size(); i++) {
        if (i % 2 == 0) {
            l_sorted[i] = even_values[j];
            j++;
        }
    }
    return l_sorted;
}