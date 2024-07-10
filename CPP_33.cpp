vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    vector<int> sorted_indices = indices;
    sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b) {
        return l[a] < l[b];
    });

    vector<int> l_sorted = l;
    for (int i = 0; i < indices.size(); ++i) {
        l_sorted[indices[i]] = l[sorted_indices[i]];
    }

    return l_sorted;
}