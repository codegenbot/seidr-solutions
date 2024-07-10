vector<float> issame(vector<float>& l, vector<float> l_copy) {
    vector<float> sorted_even = l_copy;
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
    vector<float> l = {5, 3, 8, 6, 1, 18, 2, 10};
    vector<float> sort_even;
    sort_even = issame(l, l);

    assert(sort_even == vector<float>({1, 3, 2, 6, 5, 10, 8, 18}));
    return 0;
}