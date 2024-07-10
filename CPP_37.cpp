bool issame(const vector<float>& a, const vector<float>& b) {
    vector<float> even_values;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(a[i]);
        }
    }
    sort(even_values.begin(), even_values.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(a[i]);
        }
    }

    return result;
}