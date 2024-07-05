vector<int> sort_third(vector<int> l) {
    vector<int> third_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            third_indices.push_back(l[i]);
        }
    }
    sort(third_indices.begin(), third_indices.end());
    
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = third_indices[idx++];
        }
    }
    return l;
}