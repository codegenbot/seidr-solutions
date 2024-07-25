bool issame(vector<int> a, vector<int> b) {
    return a[2] == b[2];
}

bool sort_third(const vector<int>& a, const vector<int>& b) {
    return a[2] < b[2];
}

vector<vector<int>> sort_by_third(const vector<vector<int>>& l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end(), [&l](int a, int b) {
        return l[a][2] < l[b][2];
    });

    vector<vector<int>> result = l;
    for (int i = 0; i < sorted_indices.size(); ++i) {
        result[sorted_indices[i]] = l[sorted_indices[i]];
    }

    return result;
}