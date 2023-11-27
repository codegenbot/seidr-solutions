vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    
    // Sort the vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    // Find common elements
    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            // Add common element to result
            result.push_back(l1[i]);
            
            // Move both pointers forward
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            // Move pointer of l1 forward
            i++;
        } else {
            // Move pointer of l2 forward
            j++;
        }
    }
    
    // Remove duplicates from result
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}