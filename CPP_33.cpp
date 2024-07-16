bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(const vector<int>& l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b) {
        return l[a] < l[b];
    });

    vector<int> sorted_values;
    for (int i = 0; i < sorted_indices.size(); ++i) {
        sorted_values.push_back(l[sorted_indices[i]]);
    }

    return sorted_values;
}