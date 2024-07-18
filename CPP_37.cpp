bool issame(vector<float> a, vector<float> b);

void sort_even(vector<float>& l) {
    vector<float> even_vals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }

    sort(even_vals.begin(), even_vals.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_vals[even_index];
            even_index++;
        }
    }
}