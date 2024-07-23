vector<float> even_values;
    vector<float> result;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            result.push_back(l[i]);
        } else {
            result.push_back(l[i]);
        }
    }
    sort(even_values.begin(), even_values.end());
    size_t even_index = 0;
    for (size_t i = 0; i < result.size(); i++) {
        if (i % 2 == 0) {
            continue;
        } else {
            result[i] = even_values[even_index];
            even_index++;
        }
    }
    return result;
}