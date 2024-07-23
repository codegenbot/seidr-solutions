vector<float> even_vals;
    vector<float> result(l);

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }

    sort(even_vals.begin(), even_vals.end());

    size_t j = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_vals[j];
            j++;
        }
    }

    return result;
}