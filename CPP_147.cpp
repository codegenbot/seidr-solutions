int get_matrix_triples(int n) {
    vector<int> a(n); // Create an integer vector of length n
    int count = 0; // Initialize count to 0

    // Fill the vector with values according to the given formula
    for (int i = 0; i < n; i++) {
        a[i] = i * i - i + 1;
    }

    // Check for triples where i < j < k and a[i] + a[j] + a[k] is a multiple of 3
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }

    return count; // Return the count
}