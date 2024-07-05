vector<int> sort_third(vector<int> l) {
    vector<int> third_indices_values;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            third_indices_values.push_back(l[i]);
        }
    }
    sort(third_indices_values.begin(), third_indices_values.end());
    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = third_indices_values[j++];
        }
    }
    return l;
}