vector<float> odd_indicies;
    vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        } else {
            odd_indicies.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    vector<float> result;
    int i = 0, j = 0;
    while (i < odd_indicies.size() || j < even_values.size()) {
        if (i % 2 == 0) {
            result.push_back(even_values[j]);
            j++;
        } else {
            result.push_back(odd_indicies[i]);
            i++;
        }
    }

    return result;
}