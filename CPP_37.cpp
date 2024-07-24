vector<float> even_indexes;
    vector<float> sorted_even_indexes;
    vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indexes.push_back(l[i]);
            sorted_even_indexes.push_back(l[i]);
        }
    }

    sort(sorted_even_indexes.begin(), sorted_even_indexes.end());

    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(sorted_even_indexes[sorted_even_index]);
            sorted_even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}