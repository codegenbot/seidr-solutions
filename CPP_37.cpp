void sort_even(const vector<float>& a) {
    vector<pair<float, int>> even_indices;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(make_pair(a[i], i));
        }
    }

    sort(even_indices.begin(), even_indices.end());

    vector<float> sorted_values;
    for (const auto& pair : even_indices) {
        sorted_values.push_back(pair.first);
    }

    int j = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            a[i] = sorted_values[j];
            j++;
        }
    }
}