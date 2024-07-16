int get_matrix_triples(int n){
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int ai = i * i - i + 1;
        if (ai % 3 == 0) {
            count += i - 1;
        }
    }
    return count;
}