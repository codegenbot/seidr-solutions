vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    
    // Sort the vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    // Find the common elements
    int i = 0;
    int j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            // Add the common element to the result vector
            result.push_back(l1[i]);
            
            // Move to the next elements in both vectors
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            // Move to the next element in the first vector
            i++;
        } else {
            // Move to the next element in the second vector
            j++;
        }
    }
    
    // Remove duplicate elements from the result vector
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}