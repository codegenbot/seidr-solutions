vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}

int main() {
    vector<float> input = {4.5, 2.1, 3.2, 1.0, 5.5};
    vector<float> sorted_even = sort_even(input);

    vector<float> expected_output = {2.1, 4.5, 1.0, 3.2, 5.5};

    assert(ism_same(sorted_even, expected_output));

    return 0;
}