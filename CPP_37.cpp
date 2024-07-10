vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> input = {3.2, 1.5, 4.8, 2.1, 6.7, 5.3};
    vector<float> expected_output = {1.5, 2.1, 3.2, 4.8, 5.3, 6.7};
    vector<float> result = sort_even(input);
    assert(issame(result, expected_output));
    return 0;
}