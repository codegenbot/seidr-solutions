bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    // Iterate over each element
    for (int i = 0; i < n - 2; i++) {
        // Fix the first element
        int first = l[i];
        // Find pairs with sum equals to -first
        for (int j = i + 1; j < n - 1; j++) {
            // Fix the second element
            int second = l[j];
            // Find the third element to complete the triplet
            for (int k = j + 1; k < n; k++) {
                // Check if the sum of the three elements is zero
                if (first + second + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    // No triplet with sum zero found
    return false;
}