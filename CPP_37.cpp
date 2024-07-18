vector<float> sort_even(vector<float> l) { 
    vector<float> even_vals;
    vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }

    sort(even_vals.begin(), even_vals.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_vals[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}