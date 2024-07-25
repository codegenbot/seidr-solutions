int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 in C++
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (sorted[i] != lst[0]) {
            if (i > 0) return sorted[i-1]; // Return the second smallest element
            else return sorted[i];
        }
    }
    return -1;
}