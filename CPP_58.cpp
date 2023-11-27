vector<int> common(vector<int> l1, vector<int> l2) {
    // Sort both vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    // Create a vector to store the common elements
    vector<int> commonElements;

    // Iterate through both vectors and find the common elements
    int i = 0;
    int j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            // Found a common element
            commonElements.push_back(l1[i]);
            i++;
            j++;
        }
    }

    // Remove duplicates from commonElements vector
    commonElements.erase(unique(commonElements.begin(), commonElements.end()), commonElements.end());

    return commonElements;
}