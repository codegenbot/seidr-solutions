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

int main() {
    vector<float> l = {3.5, 1.5, 4.2, 2.1, 5.8};
    vector<float> expected_output = {1.5, 3.5, 2.1, 4.2, 5.8};
    
    assert(sort_even(l) == expected_output);
    
    return 0;
}