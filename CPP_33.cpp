vector<int> res = l;
    vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    sort(indices.begin(), indices.end(), [&](int a, int b) { return l[a] < l[b]; });
    for (int i = 0; i < indices.size(); ++i) {
        res[indices[i]] = l[indices[i]];
    }
    return res;
}