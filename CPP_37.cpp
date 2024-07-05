vector<float> even_values;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    sort(even_values.begin(), even_values.end());
    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_values[even_index++];
    }
    return l;
}