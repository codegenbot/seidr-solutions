vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    
    for (int index : sorted_indices) {
        sort(l.begin() + index, l.begin() + index + 3);
    }
    
    return l;
}