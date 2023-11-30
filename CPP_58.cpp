vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end()); // Sort the first vector
    sort(l2.begin(), l2.end()); // Sort the second vector
    
    // Find common elements
    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            // Add common element to result vector
            result.push_back(l1[i]);
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    // Remove duplicates from result vector
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}