vector<float> even_values;
    vector<float> result(l.begin(), l.end());

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_values[j];
            j++;
        }
    }

    return result;
}