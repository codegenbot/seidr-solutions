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
    vector<float> l = {1.1, 2.2, 3.3, 4.4, 5.5};
    vector<float> sorted_even = sort_even(l);
    vector<float> expected_result = {1.1, 4.4, 3.3, 2.2, 5.5};

    assert(equal(sorted_even.begin(), sorted_even.end(), expected_result.begin()));
}