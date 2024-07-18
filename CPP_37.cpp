vector<float> sorted_even_values;
    for (size_t i = 0; i < l.size(); ++i) {
        if (i % 2 == 1) {
            sorted_even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    size_t sorted_even_index = 0;
    vector<float> result;
    for (size_t i = 0; i < l.size(); ++i) {
        if (i % 2 == 1) {
            result.push_back(l[i]);
        } else {
            result.push_back(sorted_even_values[sorted_even_index]);
            ++sorted_even_index;
        }
    }
    return result;
}