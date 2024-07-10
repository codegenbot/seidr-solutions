vector<int> indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    vector<int> sorted_indices;
    for (int index : indices) {
        sorted_indices.push_back(l[index]);
    }
    sort(sorted_indices.begin(), sorted_indices.end());
    for (int i = 0; i < indices.size(); i++) {
        l[indices[i]] = sorted_indices[i];
    }
    return l;
}