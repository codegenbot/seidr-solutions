vector<float> even_numbers;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_numbers.push_back(l[i]);
        }
    }
    sort(even_numbers.begin(), even_numbers.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_numbers[even_index++]);
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}