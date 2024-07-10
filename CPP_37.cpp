vector<float> sort_even(vector<float> l) {
    vector<float> sorted_even = l;
    vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even[i] = even_values[j];
            j++;
        }
    }

    return sorted_even;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));