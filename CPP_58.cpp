vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;

    // Sort both vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    // Initialize two pointers
    int i = 0;
    int j = 0;

    // Iterate through both vectors
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            // Add common element to result
            result.push_back(l1[i]);

            // Move both pointers forward
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            // Move first pointer forward
            i++;
        } else {
            // Move second pointer forward
            j++;
        }
    }

    // Remove duplicates from result
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}