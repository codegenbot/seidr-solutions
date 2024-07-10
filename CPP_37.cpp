vector<float> issame(vector<float> l, vector<float> &sorted_even) {
    vector<float> even_values;
    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    sort(even_values.begin(), even_values.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            sorted_even[i] = even_values[j];
            ++j;
        }
    }
    return sorted_even;
}
int main() {
    vector<float> l = {3.14, 2.71, 1.41, 1.61, 1.73};
    vector<float> sort_even(l.size());
    assert(issame(l, sort_even) == vector<float>{1.41, 2.71, 1.61, 3.14, 1.73});
    return 0;
}