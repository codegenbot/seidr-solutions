vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    
    // Sort both vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    // Find common elements
    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            // Add the common element to the result
            result.push_back(l1[i]);
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    // Remove duplicates from the result
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}