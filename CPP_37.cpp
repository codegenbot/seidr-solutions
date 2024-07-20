vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> result;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    sort(even_values.begin(), even_values.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

// Replace the incomplete function call in the assert statement with a valid function call
sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});