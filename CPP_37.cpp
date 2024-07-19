vector<float> even_numbers;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_numbers.push_back(l[i]);
        }
    }
    sort(even_numbers.begin(), even_numbers.end());

    vector<float> sorted_l;
    size_t even_index = 0;
    size_t odd_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_l.push_back(even_numbers[even_index++]);
        } else {
            sorted_l.push_back(l[i]);
        }
    }

    return sorted_l;
}