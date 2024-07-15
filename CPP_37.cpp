vector<float> even_indices;
    vector<float> sorted_even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }

    sort(sorted_even_indices.begin(), sorted_even_indices.end());

    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_index];
            sorted_index++;
        }
    }

    return l;
}