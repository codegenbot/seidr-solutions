int get_matrix_triples(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            for (int k = j + 1; k <= n; ++k) {
                if ((i * i - i + 1 + j * j - j + 1 + k * k - k + 1) % 3 == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}