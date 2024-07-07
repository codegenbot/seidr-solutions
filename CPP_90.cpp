int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    if (sorted.size() < 2) return -1; // Return None
    
    for (int i = 0; i < sorted.size(); ++i)
        if (sorted[i] > sorted[0])
            return sorted[i];
    
    return -1;
}