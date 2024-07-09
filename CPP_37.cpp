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
    vector<float> l = {3.5, 2.1, 4.7, 1.2, 5.3};
    vector<float> expected_result = {2.1, 1.2, 4.7, 3.5, 5.3};
    
    vector<float> result = sort_even(l);

    assert(result == expected_result);

    return 0;
}