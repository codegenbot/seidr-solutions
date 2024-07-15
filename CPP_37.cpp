vector<float> sort_even(vector<float> l) {
    vector<float> even_values;

    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i += 2) {
        l[i] = even_values[even_index];
        even_index++;
    }

    return l;
}