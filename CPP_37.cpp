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
    vector<float> input = {3.2, 1.5, 4.7, 2.1, 5.3};
    vector<float> expected_output = {1.5, 3.2, 2.1, 4.7, 5.3};
    
    vector<float> output = sort_even(input);
    
    assert(equal(output.begin(), output.end(), expected_output.begin()));

    return 0;
}