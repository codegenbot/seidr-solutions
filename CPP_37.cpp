vector<float> even_values;
    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_values[j];
            ++j;
        }
    }

    return l;
}