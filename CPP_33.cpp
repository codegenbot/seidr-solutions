bool issame(const vector<int>& a, const vector<int>& b) {
    return a[2] == b[2];
}

vector<int> sort_third(vector<int> l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    
    for (int index : sorted_indices) {
        sort(l.begin() + index, l.begin() + index + 3, issame);
    }
    
    return l;
}