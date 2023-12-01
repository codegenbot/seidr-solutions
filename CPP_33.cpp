vector<int> sort_third(vector<int> l) {
    vector<int> lPrime = l;
    vector<int> indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    sort(indices.begin(), indices.end(), [&](int a, int b) { return l[a] < l[b]; });
    for (int j = 0; j < indices.size(); j++) {
        lPrime[indices[j]] = l[indices[j]];
    }
    return lPrime;
}