bool issame(vector<float> a, vector<float> b);

void sort_even(vector<float>& l) {
    vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_values[even_index];
            even_index++;
        }
    }
}

vector<float> sort_even_elements(vector<float> l) {
    sort_even(l);
    return l;
}