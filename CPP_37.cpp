vector<float> sort_even(vector<float> a) {
    vector<float> even_values;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(a[i]);
        }
    }
    sort(even_values.begin(), even_values.end());
    return even_values;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}