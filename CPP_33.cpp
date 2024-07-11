vector<int> indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    vector<int> sorted_values;
    for (int index : indices) {
        sorted_values.push_back(l[index]);
    }

    sort(sorted_values.begin(), sorted_values.end());

    for (int i = 0; i < sorted_values.size(); i++) {
        l[indices[i]] = sorted_values[i];
    }

    return l;
}