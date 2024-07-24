vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(l[i]);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end());
    
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = sorted_indices[j++];
        }
    }
    
    return l;
}