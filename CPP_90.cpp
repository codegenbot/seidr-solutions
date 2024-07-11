int next_smallest(vector<int> lst) {
    if (lst.empty()) return NULL; // Check if the vector is empty
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) return sorted[i]; // Return the second smallest element
    }
    return NULL; // If all elements are same, return NULL
}